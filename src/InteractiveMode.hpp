//
//  InteractiveMode.hpp
//  HackU2018
//
//  Created by 斉藤俊介 on 2018/08/30.
//

#ifndef InteractiveMode_hpp
#define InteractiveMode_hpp

#include <stdio.h>
#include "ofMain.h"
#include "ofxTrueTypeFontUC.h"

struct Elem {
    string entranceStationName;
    string exitStationName;
    string entranceStationId;
    int money;
};

class InteractiveMode {
private:
    vector<struct Elem> dataSets;
    vector<ofVec2f> position;
    vector<bool> isVisible;
    ofxTrueTypeFontUC font;
    int index = 0;
public:
    InteractiveMode();
    InteractiveMode(vector<struct Elem> elem);
    void update();
    void draw();
    void isClicked(int x, int y);
};

#endif /* InteractiveMode_hpp */
