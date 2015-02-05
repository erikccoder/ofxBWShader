# ofxBWShader
Black &amp; White filter.

how to use
------
		ofxBWShader::beginShader();
				tex.draw(0, 0);
		ofxBWShader::endShader();
		
		or
		
		ofxBWShader shader;		
		shader.begin();
				tex.draw(0, 0);
		shader.end();
		
