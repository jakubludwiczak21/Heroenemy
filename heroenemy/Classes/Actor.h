#ifndef ACTOR_H
#define ACTOR_H

class Actor {
public:
    int x, y;

    Actor(int startX, int startY);
    virtual void move(int width, int height, int dx, int dy) = 0;

private:
    Actor(const Actor& a);
};

#endif
