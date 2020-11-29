#include <iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int check(int[],int[]);
struct mem_att {
    int male;
    int female;
    int prof_teacher;
    int prof_armedforces;
    int prof_business;
    int two_child;
    int one_child;
    int four_child;
    int five_child;
    int seven_seater_car;
    int yt_videos;
    int movies;
    int high_school;
    int college;
    int uttrakhand;
    int notuttrakhand;
    int india;
    int foreign;
    int primary;
    int prof_press;
    int prof_farmer;
    int marriage;
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22;
}m1,m2;
int main()
{
    int inp,res;
    int strarr[22];
    int filearr[22];
    string name;
    ofstream fin;
    ofstream name_file;
    ifstream fout;
    ifstream out_name;
    cout<<"Enter your choice.\n1.Add Family Members\n2.Play The Game\n";
    cin>>inp;

    switch(inp){
    case 1: do{fin.open("data.txt",std::ios_base::app);
                name_file.open("name.txt",std::ios_base::app);
                if(fin){
                cout<<"Name of the family member.\n";
                cin.clear();
                cin.sync();
                getline(cin,name);
                name_file<<name<<endl;

                cout<<"Is your character Male(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Is your character Female(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Is your character a Teacher(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Is your character a Farmer(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Is your character in Armed Forced(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Is your character a Businessman(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character have 2 children(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character have 1 child(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character have 4 children(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character have 5 children(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character have a car(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character makes YouTube videos(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character has worked in movies(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character studies in high school(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character go to College(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character Live in your Native Place(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character Live outside of your Native place1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character Lives in India(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character Lives outside India(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character go to primary school(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Does your character work in media(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Is your character married(1/0)?\n";
                cin>>res;
                fin<<res<<endl;

                cout<<"Wanna Add more(1/0)";
                cin>>inp;
                fin.close();
                    }
    }while(inp==1);
        break;
    case 2:
            cout<<"Is your character Male(1/0)?\n";
            cin>>m1.male;

            if(m1.male==1){
                m1.female=0;
            }else{
                m1.female=1;
            }
            m1.a1=m1.male;
            m1.a2=m1.female;

            cout<<"Is your character a Teacher(1/0)?\n";
            cin>>m1.prof_teacher;
            if(m1.prof_teacher==1){
                m1.prof_armedforces=0;
                m1.prof_business=0;
                m1.high_school=0;
                m1.college=0;
                m1.primary=0;
                m1.prof_press=0;
                m1.prof_farmer=0;
                m1.a3=m1.prof_teacher;
            }else{
                cout<<"Is your character in Armed Forced(1/0)?\n";
                cin>>m1.prof_armedforces;
                if(m1.prof_armedforces==1){
                m1.prof_teacher=0;
                m1.prof_business=0;
                m1.high_school=0;
                m1.college=0;
                m1.primary=0;
                m1.prof_press=0;
                m1.prof_farmer=0;
                m1.a5=m1.prof_armedforces;
            }else{
                cout<<"Is your character a Businessman(1/0)?\n";
                cin>>m1.prof_business;
                if(m1.prof_business==1){
                m1.prof_teacher=0;
                m1.prof_armedforces=0;
                m1.high_school=0;
                m1.college=0;
                m1.primary=0;
                m1.prof_press=0;
                m1.prof_farmer=0;
                m1.a6=m1.prof_business;
            }else{
                cout<<"Does your character studies in high school(1/0)?\n";
                cin>>m1.high_school;
                if(m1.high_school==1){
                m1.prof_teacher=0;
                m1.prof_armedforces=0;
                m1.prof_business=0;
                m1.college=0;
                m1.primary=0;
                m1.prof_press=0;
                m1.prof_farmer=0;
                m1.a14=m1.high_school;
            }else{
                cout<<"Does your character go to College(1/0)?\n";
                cin>>m1.college;
                if(m1.college==1){
                m1.prof_teacher=0;
                m1.prof_armedforces=0;
                m1.prof_business=0;
                m1.high_school=0;
                m1.primary=0;
                m1.prof_press=0;
                m1.prof_farmer=0;
                m1.a15=m1.college;
            }else{
                cout<<"Does your character go to primary school(1/0)?\n";
                cin>>m1.primary;
                if(m1.primary==1){
                m1.prof_teacher=0;
                m1.prof_armedforces=0;
                m1.prof_business=0;
                m1.high_school=0;
                m1.college=0;
                m1.prof_press=0;
                m1.prof_farmer=0;
                m1.a20=m1.primary;
            }else{
                cout<<"Does your character work in media(1/0)?\n";
                cin>>m1.prof_press;
                if(m1.prof_press==1){
                m1.prof_teacher=0;
                m1.prof_armedforces=0;
                m1.prof_business=0;
                m1.high_school=0;
                m1.college=0;
                m1.primary=0;
                m1.prof_farmer=0;
                m1.a21=m1.prof_press;
            }else{
                cout<<"Is your character a Farmer(1/0)?\n";
                cin>>m1.prof_farmer;
                if(m1.prof_farmer==1){
                m1.prof_teacher=0;
                m1.prof_armedforces=0;
                m1.prof_business=0;
                m1.high_school=0;
                m1.college=0;
                m1.primary=0;
                m1.prof_press=0;
                m1.a4=m1.prof_farmer;
            }
            }
            }
            }
            }

            }
            }
            }

            cout<<"Does your character have 2 children(1/0)?\n";
            cin>>m1.two_child;
            if(m1.two_child==1){
                m1.one_child=0;
                m1.four_child=0;
                m1.five_child=0;
                m1.a7=m1.two_child;
            }else{
                cout<<"Does your character have 1 child(1/0)?\n";
                cin>>m1.one_child;
                if(m1.one_child==1){
                m1.two_child=0;
                m1.four_child=0;
                m1.five_child=0;
                m1.a8=m1.one_child;
            }else{
                cout<<"Does your character have 4 children(1/0)?\n";
                cin>>m1.four_child;
                if(m1.four_child==1){
                m1.two_child=0;
                m1.one_child=0;
                m1.five_child=0;
                m1.a9=m1.four_child;
            }else{
                cout<<"Does your character have 5 children(1/0)?\n";
                cin>>m1.five_child;
                if(m1.five_child==1){
                m1.two_child=0;
                m1.one_child=0;
                m1.four_child=0;
                m1.a10=m1.five_child;
            }
            }
            }
            }

            cout<<"Does your character makes YouTube videos(1/0)?\n";
            cin>>m1.yt_videos;
            m1.a12=m1.yt_videos;

            cout<<"Does your character have a car(1/0)?\n";
            cin>>m1.seven_seater_car;
            m1.a11=m1.seven_seater_car;

            cout<<"Does your character has worked in movies(1/0)?\n";
            cin>>m1.movies;
            m1.a13=m1.movies;

            cout<<"Does your character Lives in your Native place(1/0)?\n";
            cin>>m1.uttrakhand;
            if(m1.uttrakhand==1){
                m1.notuttrakhand=0;
            }else{
                m1.notuttrakhand=1;
            }
            m1.a16=m1.uttrakhand;
            m1.a17=m1.notuttrakhand;

            cout<<"Does your character Lives in India(1/0)?\n";
            cin>>m1.india;
            if(m1.india==1){
                m1.foreign=0;
            }else{
                m1.foreign=1;
            }
            m1.a18=m1.india;
            m1.a19=m1.foreign;

            cout<<"Is your character married(1/0)?\n";
            cin>>m1.marriage;
            m1.a22=m1.marriage;

            strarr[0]=m1.a1;
            strarr[1]=m1.a2;
            strarr[2]=m1.a3;
            strarr[3]=m1.a4;
            strarr[4]=m1.a5;
            strarr[5]=m1.a6;
            strarr[6]=m1.a7;
            strarr[7]=m1.a8;
            strarr[8]=m1.a9;
            strarr[9]=m1.a10;
            strarr[10]=m1.a11;
            strarr[11]=m1.a12;
            strarr[12]=m1.a13;
            strarr[13]=m1.a14;
            strarr[14]=m1.a15;
            strarr[15]=m1.a16;
            strarr[16]=m1.a17;
            strarr[17]=m1.a18;
            strarr[18]=m1.a19;
            strarr[19]=m1.a20;
            strarr[20]=m1.a21;
            strarr[21]=m1.a22;

            int start=1;
            int ending=22;
            string output;
            int cnt=0;
            int j=0;
            int z;
            int fi=0;

            fout.open("data.txt");
            out_name.open("name.txt");

            while(fout){
                cnt++;
                if(cnt==start){
                    getline(out_name,output);
                }
                if(cnt>=start){
                    fout>>filearr[j];
                    j++;

                    if(cnt==ending){
                            z=check(strarr,filearr);
                    if(z==1){
                       cout<<"I think Of: "<<output;
                       fi=1;
                       break;
                    }
                    start=start+22;
                    ending=ending+22;
                    j=0;
                    }
                }
            }
            if(fi==0){
                cout<<"Pl add that member first";
            }
            fout.close();
            out_name.close();

        break;
    }

getch();
return 0;
}

int check(int str[],int file[]){

int i,shure=1;

for(i=0;i<22;i++){
    if(str[i]!=file[i]){
        shure=0;
        break;
    }
}


return shure;
}


