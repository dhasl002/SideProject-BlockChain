#ifndef TIMESTAMP_H
#define TIMESTAMP_H


class timeStamp
{
    public:
        timeStamp();

        int Getyear() { return year; }
        void Setyear(int val) { year = val; }
        int Getmonth() { return month; }
        void Setmonth(int val) { month = val; }
        int Getday() { return day; }
        void Setday(int val) { day = val; }
        int Gethour() { return hour; }
        void Sethour(int val) { hour = val; }
        int Getminute() { return minute; }
        void Setminute(int val) { minute = val; }

    protected:

    private:
        int year;
        int month;
        int day;
        int hour;
        int minute;
};

#endif // TIMESTAMP_H
