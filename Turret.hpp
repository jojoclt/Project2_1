#ifndef TURRET_HPP
#define TURRET_HPP
#include <allegro5/base.h>
#include <list>
#include <string>

#include "Sprite.hpp"

class Enemy;
class PlayScene;
class EnemyBullet;

class Turret: public Engine::Sprite {
protected:
    int price;
    float coolDown;
    float reload = 0;
    float radius;
    float hp;
    float rotateRadian = 2 * ALLEGRO_PI;
    bool explodable;
    bool isDestroy;
    float ExplodeRadius;
    std::list<Turret*>::iterator lockedTurretIterator;
    PlayScene* getPlayScene();
    // Reference: Design Patterns - Factory Method.
    virtual void CreateBullet() = 0;

public:
    bool Enabled = true;
    bool Preview = false;
    Enemy* Target = nullptr;
    std::list<Enemy*> lockedEnemy;
    std::list<EnemyBullet*> lockedEnemyBullet;
    Turret(/*std::string imgBase,*/std::string imgTurret, float x, float y, float radius, int price, float coolDown, float hp);
    void Update(float deltaTime) override;
    void Draw() const override;
	int GetPrice() const;
    void Hit(float damage);
    void OnExplode();
    bool getExplode() const;
    bool getDestroy() const;
    float getExplodeRadius() const;
};
#endif // TURRET_HPP
