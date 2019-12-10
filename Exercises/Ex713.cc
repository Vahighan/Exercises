    #include <iostream>
    #include <cmath>
    using namespace std;
    float Clip(float Val)
    {
        return fmin(fmax(Val,-25),30);
    }
    int main()
    {
        float x;
        x = 300;
        cout << Clip(x)<<"\n";
        return 0;
    }
