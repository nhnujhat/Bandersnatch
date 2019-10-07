#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
#include"gameProperties.h"
#include"players.h"
int i,j=0,k,p,q;
int fight(playerStruct *Attacker,playerStruct *Target)
{
    if(Target->healthpoints>0)
    {
        int EffectiveAttack=Attacker->attack-Target->defense;
        if(EffectiveAttack<0) EffectiveAttack=0;
        if(Attacker->autoPilot==false) Target->healthpoints=Target->healthpoints-EffectiveAttack;
        else Target->healthpoints=Target->healthpoints-EffectiveAttack;
        p=Target->healthpoints;
        q=Target->healthpoints;
    }
}
void showHp(int a,int b)
{
    char str1[100],str2[100];
    setcolor(GREEN);
    rectangle(200,200,300,300);
    int points1[]={200,200,120,250,200,300,200,200};
    drawpoly(4,points1);
    int points2[]={300,200,380,250,300,300,300,200};
    drawpoly(4,points2);
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
    line(530,450,600,470);
    line(600,470,690,470);
    line(690,470,670,450);
    line(530,520,670,520);
    line(530,520,510,530);
    line(510,530,510,650);
    line(530,520,530,650);
    line(670,520,510,630);
    line(670,540,670,520);
    line(670,580,670,520);
    line(670,580,530,690);
    int points3[]={510,630,500,670,530,690,510,630};
    drawpoly(4,points3);
    line(670,560,700,540);
    line(670,550,700,530);
    line(700,540,700,530);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    sprintf(str1,"%d",a);
    sprintf(str2,"%d",b);
    outtextxy(450,800,"Dragonman HP:");
    outtextxy(450,830,"Player HP:");
    outtextxy(650,800,str1);
    outtextxy(600,830,str2);
    getch();
    cleardevice();
}
void dragonmanattack()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    DWORD screenwidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD screenheight=GetSystemMetrics(SM_CXSCREEN);
    initwindow(screenwidth,screenheight,"",-2,-3);
    setcolor(GREEN);
    rectangle(200,200,300,300);
    int points1[]={200,200,120,250,200,300,200,200};
    drawpoly(4,points1);
    int points2[]={300,200,380,250,300,300,300,200};
    drawpoly(4,points2);
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
    line(530,450,600,470);
    line(600,470,690,470);
    line(690,470,670,450);
    line(530,520,670,520);
    line(530,520,510,530);
    line(510,530,510,650);
    line(530,520,530,650);
    line(670,520,510,630);
    line(670,540,670,520);
    line(670,580,670,520);
    line(670,580,530,690);
    int points3[]={510,630,500,670,530,690,510,630};
    drawpoly(4,points3);
    line(670,560,700,540);
    line(670,550,700,530);
    line(700,540,700,530);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(500,700,"Choose your weapon:");
    outtextxy(500,750,"1.Sword 2.Dagger");
    getch();
    cleardevice();
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
    line(530,450,600,470);
    line(600,470,690,470);
    line(690,470,670,450);
    line(530,520,670,520);
    line(530,520,510,530);
    line(510,530,510,650);
    line(530,520,530,650);
    line(670,520,510,630);
    line(670,540,670,520);
    line(670,580,670,520);
    line(670,580,530,690);
    int points6[]={510,630,500,670,530,690,510,630};
    drawpoly(4,points6);
    line(670,560,700,540);
    line(670,550,700,530);
    line(700,540,700,530);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    outtextxy(500,700,"Choose one option:");
    outtextxy(500,750,"1.Attack 2.Run");
    getch();
    cleardevice();
    setcolor(GREEN);
    rectangle(200,200,300,300);
    int points7[]={200,200,120,250,200,300,200,200};
    drawpoly(4,points7);
    int points8[]={300,200,380,250,300,300,300,200};
    drawpoly(4,points8);
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
    line(530,450,600,470);
    line(600,470,690,470);
    line(690,470,670,450);
    line(530,520,670,520);
    line(530,520,510,530);
    line(510,530,510,650);
    line(530,520,530,650);
    line(670,520,510,630);
    line(670,540,670,520);
    line(670,580,670,520);
    line(670,580,530,690);
    int points9[]={510,630,500,670,530,690,510,630};
    drawpoly(4,points9);
    line(670,560,700,540);
    line(670,550,700,530);
    line(700,540,700,530);
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
    cleardevice();
    playerStruct *Hero=NewPlayer(NFN,"FIDA",50);
    playerStruct *Villain=NewPlayer(DRAGONMAN,"DRAGONMAN",50);
    fight(Hero,Villain);
    showHp(p,q);
    setcolor(GREEN);
    rectangle(200,200,300,300);
    int points10[]={200,200,120,250,200,300,200,200};
    drawpoly(4,points10);
    int points11[]={300,200,380,250,300,300,300,200};
    drawpoly(4,points11);
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
    line(530,450,600,470);
    line(600,470,690,470);
    line(690,470,670,450);
    line(530,520,670,520);
    line(530,520,510,530);
    line(510,530,510,650);
    line(530,520,530,650);
    getch();
}
int main()
{
    int attackPower,choice;
    dragonmanattack();
    return(0);
}
