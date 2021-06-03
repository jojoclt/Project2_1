#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "FireBullet.hpp"
#include "Group.hpp"
#include "FreezeTurret.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "ShootEffect.hpp"
#include "Enemy.hpp"
const int FreezeTurret::Price = 35;
FreezeTurret::FreezeTurret(float x, float y) :

	Turret("play/turret-3.png", x, y, 15, Price, 0.5, 5.0) {
	// Move center downward, since we the turret head is slightly biased upward.
	Anchor.y += 8.0f / GetBitmapHeight();
}
void FreezeTurret::CreateBullet() {
	Engine::Point diff = Engine::Point(1, 0);
	float rotation = ALLEGRO_PI / 2;
	getPlayScene()->EffectGroup->AddNewObject(new ShootEffect(Position.x + 30, Position.y));
	getPlayScene()->BulletGroup->AddNewObject(new FireBullet(Position, diff, rotation, this));
	AudioHelper::PlayAudio("ice.wav");
}
