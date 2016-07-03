#ifndef HSVCOLOR_H
#define HSVCOLOR_H

class HSVColor{
    public:
        HSVColor(int hLow = 0, int hHigh = 0, int sLow = 0, int sHigh = 0, int vLow = 0, int vHigh = 0);    
        const int hLow;
        const int hHigh;
        const int sLow;
        const int sHigh;
        const int vLow;
        const int vHigh;
};

#endif // HSVCOLOR_H
