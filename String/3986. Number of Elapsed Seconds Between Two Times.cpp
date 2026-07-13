class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int starthr=(startTime[0]-'0')*10+(startTime[1]-'0')*1;
        int startmin=(startTime[3]-'0')*10+(startTime[4]-'0')*1;
        int startsec=(startTime[6]-'0')*10+(startTime[7]-'0')*1;
        int startT=starthr*3600+startmin*60+startsec;

        int endhr=(endTime[0]-'0')*10+(endTime[1]-'0')*1;
        int endmin=(endTime[3]-'0')*10+(endTime[4]-'0')*1;
        int endsec=(endTime[6]-'0')*10+(endTime[7]-'0')*1;
        int endT=endhr*3600+endmin*60+endsec;

        return endT-startT;
    }
};
