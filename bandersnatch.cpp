#include<stdio.h>
#include<graphics.h>
struct status
{
    char name[50];
    int healthpoints;
    int attack;    // target will lose hp of the value of attack power
    int defense;   // defense value against the attack power of attacker
};

int attackPower;
struct status player1 = {"PLAYER", 100, attackPower, 30};
struct status dragonman = {"DRAGONMAN", 100, 50, 30};
struct status magicanto = {"MAGICANTO", 200, 50, 30};
struct status bandersnatch = {"BANDERSNATCH", 300, 100, 50};


void dragonmanbody()
{
    int i, j = 0,k;
    setcolor(GREEN);      //Dragonmanstart
    rectangle(200,200,300,300);
    int points[]= {200,200,120,250,200,300,200,200};
    drawpoly(4,points);
    int points1[]= {300,200,380,250,300,300,300,200};
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
    rectangle(260,300,300,340); //dragonmanend
    //delay(20);
}

void magicantobody()
{
    int points16[]= {300,230,260,150,340,150,300,230};
    drawpoly(4,points16);//magicantobody
    line(320,160,310,170);
    line(280,160,290,170);
    setcolor(RED);
    int points17[]= {240,150,360,150,340,130,260,130,240,150};
    drawpoly(5,points17);
    int points18[]= {270,130,330,130,300,70,270,130};
    drawpoly(4,points18);
    setcolor(YELLOW);
    line(300,230,360,230);
    line(360,230,360,280);
    line(360,280,300,230);
    line(300,230,240,230);
    line(240,230,240,280);
    line(240,280,300,230);
    line(250,270,240,380);
    line(240,380,370,380);
    line(370,380,350,270);
    line(360,230,400,270);
    line(400,270,400,310);
    line(400,310,360,280);
}

void bandersnatchbody()
{
       setcolor(YELLOW); //bandersnatchstart
       int points19[]= {400,350,370,300,440,300,400,350};
       drawpoly(4,points19);
       line(440,300,480,230);
       line(480,230,550,230);
       line(550,230,510,300);
       line(510,300,440,300);
       line(370,300,330,230);
       line(330,230,260,230);
       line(260,230,300,300);
       line(300,300,370,300);
       line(400,350,335,350);
       line(400,350,475,350);
       line(475,350,430,400);
       line(430,400,380,400);
       line(335,350,380,400);
       line(380,400,400,370);
       line(400,370,430,400);
       line(515,230,475,300);
       line(295,230,335,300);
       line(260,230,335,140);
       line(550,230,475,140);
       line(382,140,335,140);
       line(475,140,428,140);
       line(428,140,400,180);
       line(382,140,400,180);
       line(375,60,440,60);
       line(440,90,510,90);
       line(510,90,610,230);
       line(610,230,600,400);
       line( 550,430,550,300);
       line(540,430,540,320);
       line(500,450,500,350);
       line(310,450,310,350);
       line(270,430,270,320);
       line(280,430,280,320);
       line(310,90,375,90);
       line(310,90,210,230);
       line(210,230,220,400);
}
void player()
{
    setcolor(WHITE); //playerstart
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
    int points2[]= {510,630,500,670,530,690,510,630};
    drawpoly(4, points2);
    line(670,560,700,540);
    line(670,550,700,530);
    line(700,540,700,530);
}
void villainHealthPoints(int a)
{
    setcolor(RED);
    rectangle(140, 35, 300, 100);
    setfillstyle(1, BLACK);
    floodfill(141, 51, RED);
    setcolor(BLACK);
    rectangle(140, 35, 300, 100);
    setcolor(WHITE);
    settextstyle(8, HORIZ_DIR, 3);
    char str[20];
    sprintf(str, "DRAGONMAN");
    outtextxy(150, 40, str);
    sprintf(str, "HP : %d", a);
    outtextxy(150, 65, str);
}

void villainHealthPoints2(int a)
{
    setcolor(RED);
    rectangle(140, 35, 300, 100);
    setfillstyle(1, BLACK);
    floodfill(141, 51, RED);
    setcolor(BLACK);
    rectangle(140, 35, 300, 100);
    setcolor(WHITE);
    settextstyle(8, HORIZ_DIR, 3);
    char str[20];
    sprintf(str, "MAGNICANTO");
    outtextxy(150, 40, str);
    sprintf(str, "HP : %d", a);
    outtextxy(150, 65, str);
}

void villainHealthPoints3(int a)
{
    setcolor(RED);
    rectangle(140, 35, 300, 100);
    setfillstyle(1, BLACK);
    floodfill(141, 51, RED);
    setcolor(BLACK);
    rectangle(140, 35, 300, 100);
    setcolor(WHITE);
    settextstyle(8, HORIZ_DIR, 3);
    char str[20];
    sprintf(str, "BANDERSNATCH");
    outtextxy(150, 40, str);
    sprintf(str, "HP : %d", a);
    outtextxy(150, 65, str);
}

void heroHealthPoints(int a)
{
    setcolor(RED);
    rectangle(1000, 35, 1500, 100);
    setfillstyle(1, BLACK);
    floodfill(1001, 51, RED);
    setcolor(BLACK);
    rectangle(1000, 35, 1500, 100);

    setcolor(WHITE);
    settextstyle(8, HORIZ_DIR, 3);
    char str[20];
    sprintf(str, "PLAYER");
    outtextxy(1050, 40, str);
    sprintf(str, "HP : %d", a);
    outtextxy(1050, 65, str);
    return;
}
chooseWeapon()
{
    settextstyle(8,HORIZ_DIR,2);
    outtextxy(500,700,"Choose your weapon:");
    outtextxy(500,750,"1.Sword 2.Dagger");
}
attackrun()
{
    setcolor(WHITE);
    settextstyle(8,HORIZ_DIR,2);
    outtextxy(500,700,"Choose one option:");
    outtextxy(500,750,"1.Attack 2.Run");
}


void dragonmanAttack()
{
    int i,j,k;
    for(i=0,j=0; i<=300; i=i+10,j=j+5)  //dragon attacks
    {
        setcolor(RED);
        circle(250+i,250+i,20+j);
        setfillstyle(SOLID_FILL, RED);
        floodfill(250+i,250+i,RED);
        delay(50);
        if(i==300)
            break;
        k=j;
    }
    delay(30);
    cleardevice();
    setcolor(GREEN);      //Dragonmanstart
    rectangle(200,200,300,300);
    int points3[]= {200,200,120,250,200,300,200,200}; //second scene,player attacks;
    drawpoly(4,points3);
    int points5[]= {300,200,380,250,300,300,300,200};
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
    rectangle(260,300,300,340); //dragonmanend
    //delay(500);
}

void magicantoAttack()
{
    int q,u,i,j,k;         //magicantoattack
    for(q=0,u=0; q<=300; q=q+10,u=u+5)
    {
        setcolor(BLUE);
        circle(420+q,280+q,20+u);
        setfillstyle(SOLID_FILL, BLUE);
        floodfill(420+q,280+q,BLUE);
        delay(50);
        if(i==300)
            break;
        k=j;
    }
    delay(30);
    cleardevice();
    int points16[]= {300,230,260,150,340,150,300,230};
    drawpoly(4,points16);//magicantobody
    line(320,160,310,170);
    line(280,160,290,170);
    setcolor(RED);
    int points17[]= {240,150,360,150,340,130,260,130,240,150};
    drawpoly(5,points17);
    int points18[]= {270,130,330,130,300,70,270,130};
    drawpoly(4,points18);
    setcolor(YELLOW);
    line(300,230,360,230);
    line(360,230,360,280);
    line(360,280,300,230);
    line(300,230,240,230);
    line(240,230,240,280);
    line(240,280,300,230);
    line(250,270,240,380);
    line(240,380,370,380);
    line(370,380,350,270);
    line(360,230,400,270);
    line(400,270,400,310);
    line(400,310,360,280);
}

void bandersnatchAttack()
{
    int r,s,t;
    for(r=0,s=0; r<=200; r=r+10,s=s+5)
    {
        setcolor(MAGENTA);
        circle(400+r,370+r,20+s);
        setfillstyle(SOLID_FILL, MAGENTA);
        floodfill(400+r,370+r,MAGENTA);
        delay(50);
        if(r==200)
            break;
        t=s;
    }
    delay(30);
    cleardevice();
    setcolor(YELLOW); //bandersnatchstart
    int points19[]= {400,350,370,300,440,300,400,350};
    drawpoly(4,points19);
    line(440,300,480,230);
    line(480,230,550,230);
    line(550,230,510,300);
    line(510,300,440,300);
    line(370,300,330,230);
    line(330,230,260,230);
    line(260,230,300,300);
    line(300,300,370,300);
    line(400,350,335,350);
    line(400,350,475,350);
    line(475,350,430,400);
    line(430,400,380,400);
    line(335,350,380,400);
    line(380,400,400,370);
    line(400,370,430,400);
    line(515,230,475,300);
    line(295,230,335,300);
    line(260,230,335,140);
    line(550,230,475,140);
    line(382,140,335,140);
    line(475,140,428,140);
    line(428,140,400,180);
    line(382,140,400,180);
    line(375,60,440,60);
    line(440,90,510,90);
    line(510,90,610,230);
    line(610,230,600,400);
    line( 550,430,550,300);
    line(540,430,540,320);
    line(500,450,500,350);
    line(310,450,310,350);
    line(270,430,270,320);
    line(280,430,280,320);
    line(310,90,375,90);
    line(310,90,210,230);
    line(210,230,220,400);
}

main()
{
    int f1 = 0, f2 = 0, f3 = 0;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    DWORD screenwidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD screenheight=GetSystemMetrics(SM_CXSCREEN);
    initwindow(screenwidth,screenheight,"",-2,-3);
    dragonmanbody();
    player();
    villainHealthPoints(100);
    heroHealthPoints(100);
    chooseWeapon();
    char weaponOption;
    weaponOption = getch() - '0';
    int *ptr;
    ptr = &player1.attack;
    if(weaponOption == 1)
        *ptr = 50;
    else if(weaponOption == 2)
        *ptr = 30;
    int i = 0;
    while(player1.healthpoints>0 && dragonman.healthpoints>0)
    {
        if(i%2 == 0)
        {
            attackrun();
            char attackOption;
            attackOption = getch() - '0';
            if(attackOption == 1)
            {
                dragonman.healthpoints = dragonman.healthpoints - (player1.attack - dragonman.defense);
                villainHealthPoints(dragonman.healthpoints);
                if(dragonman.healthpoints<0) dragonman.healthpoints=0;
                delay(500);
            }
        }
        else
        {
            dragonmanAttack();
            player1.healthpoints = player1.healthpoints - (dragonman.attack - player1.defense);
            if(player1.healthpoints<0) player1.healthpoints=0;
            heroHealthPoints(player1.healthpoints);
        }
        i++;
        player();
        dragonmanbody();
        villainHealthPoints(dragonman.healthpoints);
    }
    f1 = 1;
    delay(500);
    cleardevice();

    magicantobody();
    player();
    villainHealthPoints2(200);
    heroHealthPoints(100);
    player1.healthpoints=100;
    chooseWeapon();
    weaponOption = getch() - '0';
    ptr = &player1.attack;
    if(weaponOption == 1)
        *ptr = 60;
    else if(weaponOption == 2)
        *ptr = 30;
    i = 0;
    while(player1.healthpoints>0 && magicanto.healthpoints>0)
    {
        if(i%2 == 0)
        {
            attackrun();
            char attackOption;
            attackOption = getch() - '0';
            if(attackOption == 1)
            {
                magicanto.healthpoints = magicanto.healthpoints - (player1.attack - magicanto.defense);
                if(magicanto.healthpoints<0) magicanto.healthpoints=0;
                villainHealthPoints2(magicanto.healthpoints);
                delay(500);
            }
        }
        else
        {
            magicantoAttack();
            player1.healthpoints = player1.healthpoints - (magicanto.attack - player1.defense);
            if(player1.healthpoints<0) player1.healthpoints=0;
            heroHealthPoints(player1.healthpoints);
        }
        i++;
        player();
        magicantobody();
        villainHealthPoints2(magicanto.healthpoints);
    }
    f1 = 1;
    delay(500);
    cleardevice();

    bandersnatchbody();
    player();
    villainHealthPoints3(300);
    heroHealthPoints(100);
    player1.healthpoints=100;
    chooseWeapon();
    weaponOption = getch() - '0';
    ptr = &player1.attack;
    if(weaponOption == 1)
        *ptr = 70;
    else if(weaponOption == 2)
        *ptr = 30;
    i = 0;
    while(player1.healthpoints>0 && bandersnatch.healthpoints>0)
    {
        if(i%2 == 0)
        {
            attackrun();
            char attackOption;
            attackOption = getch() - '0';
            if(attackOption == 1)
            {
                bandersnatch.healthpoints = bandersnatch.healthpoints - (player1.attack - bandersnatch.defense);
                if(bandersnatch.healthpoints<0) bandersnatch.healthpoints=0;
                villainHealthPoints3(bandersnatch.healthpoints);
                delay(500);
            }
        }
        else
        {
            bandersnatchAttack();
            player1.healthpoints = player1.healthpoints - (bandersnatch.attack - player1.defense);
            if(player1.healthpoints<0) player1.healthpoints=0;
            heroHealthPoints(player1.healthpoints);
        }
        i++;
        player();
        bandersnatchbody();
        villainHealthPoints3(bandersnatch.healthpoints);
    }
    f1 = 1;
    delay(500);
    cleardevice();
}

