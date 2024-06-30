#include <vector>
#include <cstdlib>
#include <map>
#include "qlabel.h"
#include <QString>
using namespace std;

struct Activity {
    QString activity;
    QString evaluation;
};

QString to_stringg(int value) {
	    if (value == 0) {
	        return "0";
	    }
        QString result;
	    bool isNegative = false;
	    if (value < 0) {
	        isNegative = true;
	        value = -value; 
	    }
	    while (value > 0) {
	        char digit = '0' + (value % 10); 
	        result = digit + result;
	        value /= 10;
	    }
	    if (isNegative) {
	        result = '-' + result;
	    }
	
	    return result;
	}


class ScheduleGenerator {
public:
    ScheduleGenerator() {
        initSchedule();
    }

    void initSchedule() {
        // 8:00-10:00
        addActivities(8, "", "");
        addActivities(8, "去松林买俩包子吧", "这可是zyx最喜欢的");
        addActivities(8, "躺床上睡觉啥都不干", "其实也不是不行，你说呢？");

        // 10:00-12:00
        addActivities(10, "有课没课都去上课", "学习使你进步！");
        addActivities(10, "去玩玩乌蒙DX怎么样", "你的rating已经15300了哦");

        // 12:00-14:00
        addActivities(12, "午睡一会吧", "你昨晚睡得还好吗？");
        addActivities(12, "你的高数A学的怎么样了", "学会吧哥，别看抖音了");

        // 14:00-16:00
        addActivities(14, "起床了宝贝，要不要看看课外书", "说起来，上大学后你有多久没有看过课外书了？");
        addActivities(14, "去图书馆学习会吧", "相信我，宿舍不是学习的地方");

        // 16:00-18:00
        addActivities(16, "去看看日落吧", "如果你会拍照就更好了！");
        addActivities(16, "你的线代A学的怎么样了", "学会吧哥，别看抖音了");

        // 18:00-20:00
        addActivities(18, "总算到晚上了", "有什么想看的番/电视剧吗？看一会吧，不影响你GPA3.92");
        addActivities(18, "你有没有在kml办健身卡", "如果没有信物期中考试的话，去健身吧");

        // 20:00-22:00
        addActivities(20, "和好朋友聊聊天吧", "多聊聊，说不定就跟qlc一样找到姐了");
        addActivities(20, "去轻松客按摩吧", "只用75块钱一个小时");
    }

    void addActivities(int hour, const QString& activity, const QString& evaluation) {
        predefinedSchedule[hour].push_back(Activity{activity, evaluation});
    }

    void generateSchedule(int startHour, int endHour, QLabel *p[6]) {
        for (int hour = startHour; hour <= endHour; ++hour) {
            if (predefinedSchedule.find(hour) != predefinedSchedule.end()) {
                vector<Activity>& activities = predefinedSchedule[hour];
                int randomIndex = rand() % activities.size();
                switch (hour)
                {
                case 8:
                {
                    QString s1="";
                    s1 += activities[randomIndex].activity;
                    s1 += ",";
                    s1 += activities[randomIndex].evaluation;
                    p[0]->setText(s1);
                    break;
                }
                case 10:
                {
                    QString s2="";
                    s2 += activities[randomIndex].activity;
                    s2 += ",";
                    s2 += activities[randomIndex].evaluation;
                    p[1]->setText(s2);
                    break;
                }
                case 14:
                {
                    QString s3="";
                    s3 += activities[randomIndex].activity;
                    s3 += ",";
                    s3 += activities[randomIndex].evaluation;
                    p[2]->setText(s3);
                    break;
                }
                case 16:
                {
                    QString s2="";
                    s2 += activities[randomIndex].activity;
                    s2 += ",";
                    s2 += activities[randomIndex].evaluation;
                    p[3]->setText(s2);
                    break;
                }
                case 18:
                {
                    QString s2="";
                    s2 += activities[randomIndex].activity;
                    s2 += ",";
                    s2 += activities[randomIndex].evaluation;
                    p[4]->setText(s2);
                    break;
                }
                case 20:
                {
                    QString s2="";
                    s2 += activities[randomIndex].activity;
                    s2 += ",";
                    s2 += activities[randomIndex].evaluation;
                    p[5]->setText(s2);
                    break;
                }
                }
            }
        }
    }

private:
    QString timeToString(int hour) {
        return hour < 10 ? "0" + to_stringg(hour) : to_stringg(hour);
    }

    map<int, vector<Activity> > predefinedSchedule;
};


