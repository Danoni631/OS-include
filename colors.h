typedef struct
{
    float r;
    float g;
    float b;

    float h;
    float s;
    float v;
    float l;
} RGBQUAD, HSLCOL, HSVCOL, * PRGBQUAD;

HSLCOL RGBtoHSL(RGBQUAD rgb);
RGBQUAD HSLtoRGB(HSLCOL hsl);

HSLCOL RGBtoHSV(RGBQUAD rgb);
RGBQUAD HSVtoRGB(HSLCOL hsl);