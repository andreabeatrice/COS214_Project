#ifndef POSTLAUNCH_H
#define POSTLAUNCH_H

class PostLaunchStrategy;

class PostLaunchContext{
    private:
        PostLaunchStrategy* strategy; 

    public:
        PostLaunchContext(PostLaunchStrategy* strategy);
        int launchCost();

};

class PostLaunchStrategy{
    public:
        virtual int rocketLaunchCost() = 0;

};

class SuccessfulRocketStrategy : public PostLaunchStrategy{
    public:
        virtual int rocketLaunchCost();

};

class FailedRocketStrategy : public PostLaunchStrategy{
    public:
        virtual int rocketLaunchCost();

};

#endif