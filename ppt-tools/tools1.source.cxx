#include <iostream>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#pragma comment(lib,"winmm.lib")


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
std::cout<<"���֣�лл��"<<std::endl; 
PlaySound("./Intro�� The Dawn - Dreamtale.mp3",0, SND_LOOP|SND_ASYNC);
std::cout<<"�й����ܵ����Ĵ������˺���"<<std::endl;
std::cout<<"a.�Ͼ�����ɱ"<<" b.�ո�����"<<std::endl;
char a=_getch();
std::system("cls");
if (a=='a' || a=='A')std::cout<<"�ð��ϣ�����"<<std::endl;
else std::cout<<"С���ӣ�ҪŬ��Ŷ"<<std::endl;\
_getch();
std::system("cls");
std::cout<<"�����⣺������������____�ꡣ\b\b"<<std::endl;
std::cout<<"a.1921 b.1931 c.1941 d.1911"<<std::endl;
char b=_getch();
if (b=='a'||b=='A') std::cout<<"�ð��ϣ�����"<<std::endl;
else std::cout<<"С���ӣ�ҪŬ��Ŷ"<<std::endl;
_getch();
return 0;
}