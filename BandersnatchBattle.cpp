#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j=0,k,gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    DWORD screenwidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD screenheight=GetSystemMetrics(SM_CXSCREEN);
    initwindow(screenwidth,screenheight,"",-2,-3);
    settextstyle(2,0,10);
    setcolor(RED);
    outtextxy(450,400,"Welcome To Bandersnatch");
    delay(500);
    setcolor(WHITE);
    outtextxy(600,600,"Press Any Key");
    getch();
    cleardevice();
    settextstyle(1,0,4);
    outtextxy(20,20,"You are chosen for the mission to save planet 527");
    delay(1000);
    outtextxy(20,90,"You need to save the planet within 20 days");
    delay(1000);
    outtextxy(20,160,"You'll have to make certain decisions in different situations");
    delay(1000);
    outtextxy(20,230,"You'll be given some powers on some conditions");
    delay(1000);
    outtextxy(20,300,"Your decisions will decide how you'll end up in this mission!");
    delay(1000);
    outtextxy(20,370,"Play wisely!");
    delay(1000);
    outtextxy(20,800,"Press enter to start");
    getch();
    cleardevice();
    settextstyle(1,0,4);
    outtextxy(20,20,"Person:You are unarmed I see!");
    delay(1000);
    outtextxy(20,90,"I can give you one weapon");
    delay(1000);
    outtextxy(20,160,"BUT...");
    delay(1000);
    outtextxy(20,230,"You'll have to answer this question");
    delay(1000);
    outtextxy(20,800,"Press enter to see the question");
    getch();
    cleardevice();
    outtextxy(200,200,"WHAT IS THE 7TH LETTER OF THE ALPHABET?");
    delay(1000);
    outtextxy(300,290,"A:G");
    delay(1000);
    outtextxy(300,360,"B:H");
    delay(1000);
    outtextxy(300,430,"C:E");
    delay(1000);
    outtextxy(300,500,"D:P");
    delay(1000);
    outtextxy(20,800,"Press A/B/C/D to answer");
    getch();
    cleardevice();
    settextstyle(2,0,10);
    outtextxy(450,200,"Here is your first obstacle!");
    outtextxy(450,300,"Let's go!!");
    delay(2000);
    cleardevice();
    outtextxy(20,20,"Dragonman:Let's see how you fight me.HA HA!");
    setcolor(GREEN);
    rectangle(200,200,300,300);
    int points[]={200,200,120,250,200,300,200,200};
    drawpoly(4,points);
    int points1[]={300,200,380,250,300,300,300,200};
    drawpoly(4,points1);
    line(170,170,200,200);
    line(330,170,300,200);
    line(330,170,170,170);
    line(200,200,250,250);
    line(300,200,250,250);
    line(170,170,170,130);
    line(170,130,220,170);
    line(330,130,330,170);
    line(330,130,280,170);
    rectangle(200,300,240,340);
    rectangle(260,300,300,340);
    setcolor(WHITE);
    circle(600,450,70);
    line(530,520,670,520);
    line(530,520,530,650);
    line(670,520,670,650);
    line(530,650,670,650);
    line(530,520,500,580);
    line(500,580,530,600);
    line(670,520,700,580);
    line(700,580,670,600);
    rectangle(560,650,580,700);
    rectangle(620,650,640,700);
    delay(1500);
    outtextxy(20,800,"Press any key to start the fight");
    getch();
    cleardevice();
    outtextxy(20,20,"Dragonman!");
    outtextxy(20,60,"Health:20");
    outtextxy(800,400,"Player!");
    outtextxy(800,440,"Health:20");
    setcolor(GREEN);
    rectangle(200,200,300,300);
    int points2[]={200,200,120,250,200,300,200,200};
    drawpoly(4,points);
    int points3[]={300,200,380,250,300,300,300,200};
    drawpoly(4,points1);
    line(170,170,200,200);
    line(330,170,300,200);
    line(330,170,170,170);
    line(200,200,250,250);
    line(300,200,250,250);
    line(170,170,170,130);
    line(170,130,220,170);
    line(330,130,330,170);
    line(330,130,280,170);
    rectangle(200,300,240,340);
    rectangle(260,300,300,340);
    setcolor(WHITE);
    circle(600,450,70);
    line(530,520,670,520);
    line(530,520,530,650);
    line(670,520,670,650);
    line(530,650,670,650);
    line(530,520,500,580);
    line(500,580,530,600);
    line(670,520,700,580);
    line(700,580,670,600);
    rectangle(560,650,580,700);
    rectangle(620,650,640,700);
    for(i=0,j=0;i<=300;i=i+10,j=j+5)
    {
        setcolor(RED);
        circle(250+i,250+i,20+j);
        setfillstyle(SOLID_FILL,RED);
        floodfill(250+i,250+i,RED);
        delay(50);
        if(i==300) break;
        k=j;
    }
    delay(30);
    cleardevice();
    setcolor(WHITE);
    outtextxy(20,20,"Dragonman!");
    outtextxy(20,60,"Health:20");
    setcolor(RED);
    outtextxy(800,400,"Player!");
    outtextxy(800,440,"Health:15");
    setcolor(GREEN);
    rectangle(200,200,300,300);
    int points4[]={200,200,120,250,200,300,200,200};
    drawpoly(4,points4);
    int points5[]={300,200,380,250,300,300,300,200};
    drawpoly(4,points5);
    line(170,170,200,200);
    line(330,170,300,200);
    line(330,170,170,170);
    line(200,200,250,250);
    line(300,200,250,250);
    line(170,170,170,130);
    line(170,130,220,170);
    line(330,130,330,170);
    line(330,130,280,170);
    rectangle(200,300,240,340);
    rectangle(260,300,300,340);
    setcolor(WHITE);
    circle(600,450,70);
    line(530,520,670,520);
    line(530,520,530,650);
    line(670,520,670,650);
    line(530,650,670,650);
    line(530,520,500,580);
    line(500,580,530,600);
    line(670,520,700,580);
    line(700,580,670,600);
    rectangle(560,650,580,700);
    rectangle(620,650,640,700);
    outtextxy(20,800,"Press any key to attack!");
    getch();
    cleardevice();
    outtextxy(20,20,"Dragonman!");
    outtextxy(20,60,"Health:20");
    setcolor(WHITE);
    outtextxy(800,400,"Player!");
    outtextxy(800,440,"Health:15");
    setcolor(GREEN);
    rectangle(200,200,300,300);
    drawpoly(4,points4);
    drawpoly(4,points5);
    line(170,170,200,200);
    line(330,170,300,200);
    line(330,170,170,170);
    line(200,200,250,250);
    line(300,200,250,250);
    line(170,170,170,130);
    line(170,130,220,170);
    line(330,130,330,170);
    line(330,130,280,170);
    rectangle(200,300,240,340);
    rectangle(260,300,300,340);
    rectangle(350,350,420,365);
    rectangle(420,355,450,360);
    line(350,350,342,357.5);
    line(342,357.5,350,365);
    setcolor(WHITE);
    circle(600,450,70);
    line(530,520,670,520);
    line(530,520,530,650);
    line(670,520,670,650);
    line(530,650,670,650);
    line(530,520,500,580);
    line(500,580,530,600);
    line(670,520,700,580);
    line(700,580,670,600);
    rectangle(560,650,580,700);
    rectangle(620,650,640,700);
    delay(500);
    cleardevice();
    setcolor(RED);
    outtextxy(20,20,"Dragonman!");
    outtextxy(20,60,"Health:00");
    setcolor(WHITE);
    outtextxy(800,400,"Player!");
    outtextxy(800,440,"Health:15");
    setcolor(GREEN);
    rectangle(200,200,300,300);
    drawpoly(4,points4);
    drawpoly(4,points5);
    line(170,170,200,200);
    line(330,170,300,200);
    line(330,170,170,170);
    line(200,200,250,250);
    line(300,200,250,250);
    line(170,170,170,130);
    line(170,130,220,170);
    line(330,130,330,170);
    line(330,130,280,170);
    rectangle(200,300,240,340);
    rectangle(260,300,300,340);
    rectangle(250,250,320,265);
    rectangle(320,255,350,260);
    line(250,250,242,257.5);
    line(242,257.5,250,265);
    setcolor(WHITE);
    circle(600,450,70);
    line(530,520,670,520);
    line(530,520,530,650);
    line(670,520,670,650);
    line(530,650,670,650);
    line(530,520,500,580);
    line(500,580,530,600);
    line(670,520,700,580);
    line(700,580,670,600);
    rectangle(560,650,580,700);
    rectangle(620,650,640,700);
    delay(2000);
    cleardevice();
    setcolor(RED);
    outtextxy(450,400,"You defeated Dragonman!");
    delay(500);
    setcolor(WHITE);
    outtextxy(450,600,"Press Any Key To Continue");
    getch();
}