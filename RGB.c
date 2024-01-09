#include<stdio.h>

void main(){
    int r,g,b;
    float w,c,m,y,bl;
    
    printf("Enter the values of R, G and B: ");
    scanf("%d %d %d", &r, &g, &b);
    
    w = (float) fmax(r/255.0, fmax(g/255.0, b/255.0));
    c = (w - (float)r/255.0)/w;
    m = (w - (float)g/255.0)/w;
    y = (w - (float)b/255.0)/w;
    bl = 1.0 - w;
    
    printf("Cyan: %f\nMagenta: %f\nYellow: %f\nBlack: %f\n", c,m,y,bl);
}
/*In digital world colors are specified in RGB format, with values of R, G, and B varying on integer scale from 0 to 255.
Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format with values of C, M, Y and K varying on a real scale from 0.0 to 1.0. 
Convert RGB color to CMYK as per formula: - 
White=Max(red/255,green/255,blue/255) -
Cyan=(white - red/255)/white 
Magenta=(white - green/255)/white 
Yellow=(white - blue/255)/white 
Black=1 - white*/