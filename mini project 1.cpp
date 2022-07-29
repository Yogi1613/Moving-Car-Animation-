#include <stdio.h>
#include <graphics.h>
#include<dos.h>
#include <conio.h>
void main()
{
    clrscr();
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");


    for(int i=0;i<500;i++)
    {


    //body

    line(50+i,370,90+i,370);
    arc(110,370,0,180,20);
    line(130+i,370,250+i,370);
    arc(270,370,0,180,20);
    line(290+i,370,330+i,370);

    //lower body finish
    line(330+i,370,330+i,350);
    line(50+i,370,50+i,350);
    line(330+i,350,280+i,330);
    line(50+i,350,100+i,330);
    line(280+i,330,250+i,300);
    line(100+i,330,130+i,300);
    line(130+i,330,250+i,330);


    //window
    line(140+i,310,240+i,310);
    line(140+i,310,120+i,330);
    line(240+i,310,260+i,330);
    line(120+i,330,260+i,330);
    line(190+i,310,190+i,330);
    line(200+i,310,200+i,330);


    //wheels
    circle(110,370,20);
    circle(270,370,20);

    //road
    line(0,395,639,395);

    delay(10);
    cleardevice();

    }
    getch();
}