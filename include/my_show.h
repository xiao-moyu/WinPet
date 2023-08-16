#ifndef MY_SHOW_H__
#define MY_SHOW_H__
class my_show
{
private:
    int width;
    int high;
    bool isMax;
    char frame;
public:
    my_show(int width = 600,int high = 800,bool isMax = false,char frame = 30);
    void show();
    ~my_show();
};

my_show::my_show(int width,int high,bool isMax,char frame = 30):width(width),high(high),isMax(isMax),frame(frame)
{}

my_show::~my_show()
{
}


#endif