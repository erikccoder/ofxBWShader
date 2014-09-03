//
//  ofxHueShader.h
//
//
//  Created by erikccoder on 9/3/14.
//
//

#pragma once

#include "ofMain.h"

class ofxBWShader
{
private:
    
    ofShader shader;
    
    void setup()
    {
        
#define STRINGIFY(x) #x
        string HueShaderSrc = STRINGIFY(
                                        
                uniform sampler2DRect inputTexture;
				void main() 
				{
					vec4 normalColor = texture2DRect(inputTexture, gl_TexCoord[0].xy);
					float gray = 0.299*normalColor.r + 0.587*normalColor.g + 0.114*normalColor.b;
					gl_FragColor = vec4(gray, gray, gray, normalColor.a); 
				}
);        
        shader.setupShaderFromSource(GL_FRAGMENT_SHADER, HueShaderSrc);
        shader.linkProgram();
#undef STRINGIFY
        
    }
    
public:
    
    ofxBWShader()
    {
        setup();
    }
    ~ofxBWShader()
    {
        cout << "~ofxBWShader()" << endl;
    }
    
    void begin()
    {
        shader.begin();
// 		shader.setUniformTexture("inputTexture", tex.getTextureReference(), 0);
    }
    
    void end(){
        shader.end();
    }
    
    
    static void beginShader(){
        instance()->begin();
    }
    static void endShader(){
        instance()->end();
    }
    
    static ofPtr<ofxBWShader> instance()
    {
        
        static ofPtr<ofxBWShader>factory = ofPtr<ofxBWShader>(new ofxBWShader());
        return factory;
    }
    
};

/* EOF */
