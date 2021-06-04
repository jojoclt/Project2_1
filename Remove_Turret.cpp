#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "Group.hpp"
#include "Remove_Turret.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
const int Remove_Turret::Price = 0;
Remove_Turret::Remove_Turret(float x, float y) :

	Turret("play/bomb.png", x, y, 15, Price, 0.5, 0) {
	// Move center downward, since we the turret head is slightly biased upward.
	Anchor.y += 8.0f / GetBitmapHeight();
}
void Remove_Turret::CreateBullet() {
}
