//Hrishikesh Ram Period 4A

#include<iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int sec;
        int ampm = 1;
        int milHour;
        char timeZone;
    public:
        Time();
        void setTime(int,int,int,int);
        void setZone(char);
        void print();
        int military();
        void findGMT();
        int getHour(){return hour;}
        int getMinute(){return minute;}
        int getSec(){return sec;}
        char getZone(){return timeZone;}
};

Time::Time(){
    hour = 12;
    minute = 0;
    ampm = 0;
    sec = 0;
    milHour = 0;
}

void Time::setTime(int h,int m,int s,int a){
    hour = h;
    minute = m;
    sec = s;
    ampm = a;
}

void Time::setZone(char tz){
    timeZone = tz;
}

int Time::military(){
    if(ampm == 1 && hour != 12){
        milHour = hour + 12;
    }
    else{
        if(hour == 12 && ampm == 0){
            milHour = 0;
        }
        else{milHour = hour;}
    }
    return milHour;
}

void Time::print(){
    cout<<"Your original time is: ";
    cout<<hour<<":"<<minute<<":"<<sec;
    cout<<"\nYour military time is: ";
    cout<<military()<<":"<<minute<<":"<<sec;
}

void Time::findGMT(){
    char zone = getZone();

    if(zone == 'E' || zone == 'e'){
        if((military()+5)<24){
            cout<<"The Greenwich Mean Time (GMT) is: "<<military()+5<<":"<<minute<<":"<<sec;
        }
        else if((military()+5)>=24){
            cout<<"The Greenwich Mean Time (GMT) is: "<<((military()+5)-24)<<":"<<minute<<":"<<sec;
        }
    }
    else if(zone == 'C' || zone == 'c'){
        if((military()+6)<24){
            cout<<"The Greenwich Mean Time (GMT) is: "<<military()+6<<":"<<minute<<":"<<sec;
        }
        else if((military()+6)>=24){
            cout<<"The Greenwich Mean Time (GMT) is: "<<((military()+6)-24)<<":"<<minute<<":"<<sec;
        }
    }
    else if(zone == 'M' || zone == 'm'){
        if((military()+7)<24){
            cout<<"The Greenwich Mean Time (GMT) is: "<<military()+7<<":"<<minute<<":"<<sec;
        }
        else if((military()+7)>=24){
            cout<<"The Greenwich Mean Time (GMT) is: "<<((military()+7)-24)<<":"<<minute<<":"<<sec;
        }
    }
    else if(zone == 'P' || zone == 'p'){
        if((military()+8)<24){
            cout<<"The Greenwich Mean Time (GMT) is: "<<military()+8<<":"<<minute<<":"<<sec;
        }
        else if((military()+8)>=24){
            cout<<"The Greenwich Mean Time (GMT) is: "<<((military()+8)-24)<<":"<<minute<<":"<<sec;
        }
    }
}

void difference(Time hello, Time hello2){
    int hour1 = hello.military();
    int min1 = hello.getMinute();
    int sec1 = hello.getSec();

    int hour2 = hello2.military();
    int min2 = hello2.getMinute();
    int sec2 = hello2.getSec();

    int hourDiff,minDiff,secDiff;
    if(hour2>hour1){
        hourDiff = hour2 - hour1;

        minDiff = min2 - min1;
        if(minDiff<0){
            hourDiff-=1;
            minDiff+=60;
        }

        secDiff = sec2 - sec1;
        if(secDiff<0){
            minDiff-=1;
            secDiff+=60;
        }
    }
    else if(hour1>hour2){
        hourDiff = hour1 - hour2;

        minDiff = min1 - min2;
        if(minDiff<0){
            hourDiff-=1;
            minDiff+=60;
        }

        secDiff = sec1 - sec2;
        if(secDiff<0){
            minDiff-=1;
            secDiff+=60;
        }
    }

    cout<<endl<<"Difference is: "<<hourDiff<<":"<<minDiff<<":"<<secDiff<<endl;
}

int main()
{
    int h, m, s, a;
    char tz;
    Time clock;
    cout<<"Please enter an hour, minute, second, ampm (am = 0 & pm = 1), and time zone (E, C, M, or P): \n";
    cin>>h>>m>>s>>a>>tz;

    clock.setTime(h,m,s,a);
    clock.setZone(tz);
    cout<<endl;
    cout<<clock.getZone()<<endl;
    clock.findGMT();

    return 0;
}
