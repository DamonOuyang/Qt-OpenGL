//attribute vec4 qt_Vertex;
//attribute vec4 qt_MultiTexCoord0;
//uniform mat4 qt_ModelViewProjectionMatrix;
//varying vec4 qt_TexCoord0;

//void main(void)
//{
//    gl_Position = qt_ModelViewProjectionMatrix * qt_Vertex;
//    qt_TexCoord0 = qt_MultiTexCoord0;
//}

#version 330 core
in vec3 aPos;
void main()
{
    gl_Position = vec4(aPos,1,0);
}
