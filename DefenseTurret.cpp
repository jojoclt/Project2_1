#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "DefenseTurret.hpp"
#include "Group.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Enemy.hpp"
const int DefenseTurret::Price = 30;
DefenseTurret::DefenseTurret(float x, float y) :
	Turret("play/turret-5.png", x, y, 15, Price, 0.5, 30) {
	// Move center downward, since we the turret head is slightly biased upward.
	//explodable = true;
	//ExplodeRadius = 300;
	Anchor.y += 8.0f / GetBitmapHeight();
}

void DefenseTurret::CreateBullet() {
}