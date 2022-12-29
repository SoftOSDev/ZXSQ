#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;
char code[1024]=" #include<iostream>\n#include<ctime>\n#include<cmath>\n#include<windows.h>\n\nusing namespace std;\n\nint head,foot;\nint chicken,rabbit;\nint tmp;\n\nvoid tanxin(){\n\ttmp=foot-(2*head);\n\trabbit=tmp/2;\n\tchicken=head-rabbit;\n}\n\nvoid qiongju(){\n\tsrand(time(0));\n\tif(head==foot/2){\n\t\tchicken=head;\n\t\trabbit=0;\n\t}\n\tif(head==foot/4){\n\t\tchicken=0;\n\t\trabbit=head;\n\t}\n\telse{\n\t\twhile(true){\n\t\t\tchicken=rand()%1000;\n\t\t\trabbit=rand()%1000\n\t\t\tif(chicken*2+rabbit*4==foot && chicken+rabbit==head){\n\t\t\t\tbreak;\n\t\t\t}\n\t\t}\n\t}\n}\n\nint main(){\n\tcout<<\"Head and foot:\";\n\tcin>>head>>foot;\n\tint s;\n\tcout<<\"1.Tanxin 2.Qiongju:\";\n\tcin>>s;\n\tif(in==1){\n\t\ttanxin();\n\t}\n\tif(in==2){\n\t\tqiongju();\n\t}\n\tcout<<\"Chicken:\"<<chicken<<'\\n';\n\tcout<<\"Rabbit:\"<<rabbit<<'\\n';\n\tsystem(\"pause\");\n}";
int main(){
    system("color a");
    for(int i=1;i<=1023;i++){
        _getch()
        ;cout<<code[i];
    }
}