#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "ExplodeTurret.hpp"
#include "Group.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Enemy.hpp"
const int ExplodeTurret::Price = 100;
ExplodeTurret::ExplodeTurret(float x, float y) :
	Turret("play/turret-4.png", x, y, 20, Price, 0.5, 1) {
	explodable = true;
	ExplodeRadius = 250;
	// Move center downward, since we the turret head is slightly biased upward.
	//Anchor.y += 8.0f / GetBitmapHeight();

}

void ExplodeTurret::CreateBullet() {
	return;
}
void ExplodeTurret::OnExplode() {
	
}