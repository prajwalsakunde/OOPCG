#include<iostream>
#include<graphics.h>
#include<windows.h>
#include<cmath>
#pragma GCC diagnostic ignored "-Wwrite-strings"
using namespace std;
void pie()
{        readimagefile("white.jpg",68,32,1468,832);
        setbkcolor(WHITE);
        settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
        setcolor(CYAN);
        int x = ((getmaxx()+600)/2)+150;
        int y = ((getmaxy()-100)/2)+100;
            setfillstyle(LINE_FILL,LIGHTBLUE);
            pieslice(x,y,0,50,175);
            setfillstyle(SLASH_FILL,LIGHTGREEN);
            pieslice(x,y,50,85,175);
            setfillstyle(WIDE_DOT_FILL,RED);
            pieslice(x,y,85,130,175);
            setfillstyle(HATCH_FILL,YELLOW);
            pieslice(x,y,130,185,175);
            setfillstyle(LTSLASH_FILL,DARKGRAY);
            pieslice(x,y,185,220,175);
        setfillstyle(BKSLASH_FILL,DARKGRAY);
            pieslice(x,y,220,280,175);
            setfillstyle(CLOSE_DOT_FILL,MAGENTA);
            pieslice(x,y,280,360,175);
            delay(400);
            setbkcolor(WHITE);
             outtextxy(x+170, y-110,(char*)"MonDAY");
             outtextxy(x+70,y-200,(char*)"TuesDAY");
             outtextxy(x-120,y-210,(char*)"WednesDAY");
             outtextxy(x-280,y-80,(char*)"ThursDAY");
             outtextxy(x-250,y+110,(char*)"FriDAY");
            outtextxy(x-90,y+210,(char*)"SaturDAY");
             outtextxy(x+140 ,y+130,(char*)"SunDAY");
}
void bargrph()
{
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
    setcolor(CYAN);
    
    setlinestyle(SOLID_LINE,0,2);
    line(1050,454,1050,230);
    line(1050,455,1340,455);
    //line(90,70,100,60);
    //line(110,70,100,60);
    //line(590,430,600,420);
       //outtextxy(620,259,(char*)"X");
    //setbkcolor(WHITE);
    setfillstyle(INTERLEAVE_FILL,RED);
    bar(1075,250,1095,454);
    setfillstyle(INTERLEAVE_FILL,YELLOW);
    bar(1115,280,1135,454);
    setfillstyle(INTERLEAVE_FILL,LIGHTBLUE);
    bar(1155,260,1175,454);
    setfillstyle(INTERLEAVE_FILL,CYAN);
    bar(1195,300,1215,454);
    setfillstyle(INTERLEAVE_FILL,BROWN);
    bar(1235,310,1255,454);
    setfillstyle(INTERLEAVE_FILL,MAGENTA);
    bar(1275,290,1295,454);
    setfillstyle(INTERLEAVE_FILL,LIGHTRED);
    bar(1315,280,1335,454);
    setbkcolor(WHITE);
    outtextxy(1240,170, (char*)"BAR GRAPH");
    outtextxy(1050,190,(char*)"Y");
    outtextxy(1390,460,(char*)"X");
    outtextxy(1050,460,(char*)"O");
    outtextxy(1085,460,(char*)"M");
    outtextxy(1125,460,(char*)"Tu");
    outtextxy(1165,460,(char*)"W");
    outtextxy(1205,460,(char*)"Th");
    outtextxy(1245,460,(char*)"F");
    outtextxy(1285,460,(char*)"S");
    outtextxy(1325,460,(char*)"S");
    getch();
}
void imagedisplay3()
{
    readimagefile("white.jpg",0,0,640,480);
}
void imagedisplay4()
{
    readimagefile("shopping-cart (2).jpg",180,243,370,433);
}
void imagedisplay6()
{
    readimagefile("target.jpg",880,243,1070,433);
}
void imagedisplay7()
{
    readimagefile("salesman.jpg",180,533,370,723);
}
void imagedisplay8()
{
    readimagefile("stock.jpg",460,243,660,433);
}
void imagedisplay9()
{
    readimagefile("personal.jpg",460,533,660,723);
}
void imagedisplay10()
{
    readimagefile("opinion.jpg",1160,533,1360,723);
}
void imagedisplay11()
{
    readimagefile("barcode-scanner.jpg",1160,243,1360,434);
}
void imagedisplay12()
{
    readimagefile("shopping-bag (1).jpg",880,533,1070,723);
}
void homedisplay()
{
            readimagefile("white.jpg",68,32,1468,832);//backgr img
            readimagefile("menu.jpg",168,232,668,732);
            readimagefile("menu.jpg",868,232,1368,732);
            readimagefile("exit.jpg",718,733,818,831);

             imagedisplay4();//shop purchase
             imagedisplay6();//customer info
             imagedisplay7();//salesman info
             imagedisplay8();//stock details
             imagedisplay9();//gst tax
             imagedisplay10();//suggestions
             imagedisplay11();//billing
             imagedisplay12();//buying
}
void namings()
{
               readimagefile("naming.jpeg",530,42,930,192);
                //system("Color 7D");
}
int main()
{   int *value=0;
    DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);//1536
    DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);//864
    int window1,window2;
    window1=initwindow(screenWidth,screenHeight,"HOMEPAGE");
     setactivepage(0);//main screen
        homedisplay();
        namings();
     setactivepage(1);//stats using bar graph 
        readimagefile("white.jpg",68,32,1468,832);//backgr img
        bargrph();
         readimagefile("reply - Copy.jpg",100,100,150,150);
        readimagefile("new-window.jpg",68,160,900,820);
     setactivepage(2);// stats using pai graph
        readimagefile("white.jpg",68,32,1468,832);//backgr img
       pie();
         readimagefile("reply - Copy.jpg",100,100,150,150);
        readimagefile("new-window.jpg",68,160,900,820);
     setactivepage(3);//closing window
        readimagefile("white.jpg",68,32,1468,832);
        readimagefile("close.jpg",468,70,968,570);
        readimagefile("power-on.jpg",688,620,788,720);
    int flag=0;
    POINT cursorPos,cursorPos1,cursorPos2,cursorPos3,cursorPos4;
    setvisualpage(3);
    setcurrentwindow(window1);
     while(1)
    {   mainscreen:
                    GetCursorPos(&cursorPos1);
                    if(cursorPos1.x>=168 && cursorPos1.y>=232 && cursorPos1.x<=668 && cursorPos1.y<=732)//168,232,668,732
                    {   //cleardevice();
                        if(GetAsyncKeyState(VK_LBUTTON/*use for detect left press*/))
                            {       
                                setvisualpage(1);
                                
                                while(1)
                                {
                                    GetCursorPos(&cursorPos2);
                                    if(cursorPos2.x>=100 && cursorPos2.y>=100 && cursorPos2.x<=150 && cursorPos2.y<=150)
                                    {   //cleardevice();
                                        if(GetAsyncKeyState(VK_LBUTTON/*use for detect left press*/))
                                        {   setvisualpage(0);
                                            goto mainscreen;
                                        // delay(100);
                                        }
                                    }
                                }
                        }
                      }
                    if(cursorPos1.x>=868 && cursorPos1.y>=232 && cursorPos1.x<=1368 && cursorPos1.y<=732)//868,232,1368,732
                    {
                            if(GetAsyncKeyState(VK_LBUTTON/*use for detect left press*/))
                        {   
                            setvisualpage(2);
                            
                            while(1)
                                {
                                    GetCursorPos(&cursorPos2);
                                    if(cursorPos2.x>=100 && cursorPos2.y>=100 && cursorPos2.x<=150 && cursorPos2.y<=150)
                                    {   //cleardevice();
                                        if(GetAsyncKeyState(VK_LBUTTON/*use for detect left press*/))
                                        {   setvisualpage(0);    
                                            goto mainscreen;
                                            getch();
                                            exit(1);
                                        }
                                    }
                                }
                    
                    
                        }
                    }
                    if(cursorPos1.x>=718 && cursorPos1.y>=733 && cursorPos1.x<=818 && cursorPos1.y<=831)//718,733,818,831
                        {
                            if(GetAsyncKeyState(VK_LBUTTON/*use for detect left press*/))
                        {       
                            setvisualpage(3);
                            while(1)
                                {
                                    GetCursorPos(&cursorPos2);
                                    if(cursorPos2.x>=688 && cursorPos2.y>=620 && cursorPos2.x<=788 && cursorPos2.y<=720)//688,620,788,720
                                    {  
                                        if(GetAsyncKeyState(VK_LBUTTON/*use for detect left press*/))
                                        {        
                                            exit(1);
                                        }
                                    }
                                }
                            
                               
                        }
                        
                        }
                        
                }
             
getch();

closegraph();
return 0;
}