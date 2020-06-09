//Hrishikesh Ram 4A

#include<iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int sec;
        int ampm = 1;
        int milHour;
    public:
        Time();
        void setTime(int,int,int,int);
        void print();
        int military();
        int getHour(){return hour;}
        int getMinute(){return minute;}
        int getSec(){return sec;}
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

int main(){
    Time clock;
    Time clock2;
    int h1,m1,s1,a1;
    int h2,m2,s2,a2;
    cout<<"Enter Hour: ";
    cin>>h1;
    cout<<"Enter Minute: ";
    cin>>m1;
    cout<<"Enter Second: ";
    cin>>s1;
    cout<<"Enter 0 for AM or 1 for PM: ";
    cin>>a1;

    cout<<"Enter 2nd Hour to find difference for: ";
    cin>>h2;
    cout<<"Enter 2nd Minute to find difference for: ";
    cin>>m2;
    cout<<"Enter 2nd Second to find difference for: ";
    cin>>s2;
    cout<<"Enter 0 for AM or 1 for PM for the 2nd Time: ";
    cin>>a2;

    clock.setTime(h1,m1,s1,a1);
    clock2.setTime(h2,m2,s2,a2);
    cout<<endl;
    clock.print();
    cout<<endl;
    clock2.print();
    difference(clock,clock2);

    return 0;
}
