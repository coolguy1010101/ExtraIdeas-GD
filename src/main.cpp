#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/utils/random.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
public:
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        auto bottomMenu = this->getChildByID("bottom-menu");
        auto button = CCMenuItemSpriteExtra::create(
            CCSprite::createWithSpriteFrameName("GJ_plusBtn_001.png"),
            this,
            menu_selector(MyMenuLayer::onButtonClick)
        );
        bottomMenu->addChild(button);
        return true;
    }

   void onButtonClick(CCObject* sender) {
    switch (rand() % 25) {
        case 0:
            FLAlertLayer::create("Idea", "do something", "ok")->show();
            break;
        case 1:
            FLAlertLayer::create("Idea", "beat a demon", "ok")->show();
            break;
        case 2:
            FLAlertLayer::create("Idea", "touch grass", "ok")->show();
            break;
        case 3:
            FLAlertLayer::create("Idea", "make a nine circles level", "ok")->show();
            break;
        case 4:
            FLAlertLayer::create("Idea", "get a new percent on heliopolis", "ok")->show();
            break;
        case 5:
            FLAlertLayer::create("Idea", "do the last one idk", "ok")->show();
            break;
        case 6:
            FLAlertLayer::create("Idea", "ask someone else for ideas", "ok")->show();
            break;
        case 7:
            FLAlertLayer::create("Idea", "pay respects to michi", "ok")->show();
            break;
        case 8:
            FLAlertLayer::create("Idea", "play the recent tab!!!!", "ok")->show();
            break;
        case 9:
            FLAlertLayer::create("Idea", "go outside", "ok")->show();
            break;
        case 10:
            FLAlertLayer::create("Idea", "play a different game", "ok")->show();
            break;
        case 11:
            FLAlertLayer::create("Idea", "change your icon set", "ok")->show();
            break;
        case 12:
            FLAlertLayer::create("Idea", "beat a random level", "ok")->show();
            break;          
        case 13:
            FLAlertLayer::create("Idea", "make a recent tab level", "ok")->show();
            break;     
        case 14:
            FLAlertLayer::create("NOT AN IDEA", "I give you the rubrubpowah!", "nice tysm")->show();
            break;
        case 15:
            FLAlertLayer::create("Idea", "create a controversal tweet on twitter", "ok")->show();
            break;
        case 16:
            FLAlertLayer::create("Idea", "play robtop travel", "ok")->show();
            break;
        case 17:
            FLAlertLayer::create("Idea", "create a mod for geode :D", "ok")->show();
            break;
        case 18:
            FLAlertLayer::create("Idea", "count to 100", "ok")->show();
            break;    
        case 19:
            FLAlertLayer::create("Idea", "make a rate-worthy level", "ok")->show();
            break;    
        case 20:
            FLAlertLayer::create("Idea", "get creative lol", "ok")->show();
            break;
        case 21:
            FLAlertLayer::create("Idea (credit: stripes10122)", "make a 1 hour long level cuz why not", "ok")->show();
            break;    
        case 22:
            FLAlertLayer::create("Idea (credit: stripes10122)", "make a year long level", "ok")->show();
            break;    
        case 23:
            FLAlertLayer::create("Idea (credit: stripes10122)", "play isreal circles", "ok")->show();
            break;    
        case 24:
            FLAlertLayer::create("Idea", "send your idea in the discord!", "ok")->show();
            break;
        case 25:
            FLAlertLayer::create("Idea (credit: stripes10122)", "eat rubrub", "ok")->show();
            break;        
    }
}
};