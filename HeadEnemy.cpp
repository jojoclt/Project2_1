#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "NormalEnemyBullet.hpp"
#include "Group.hpp"
#include "HeadEnemy.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "ShootEffect.hpp"
#include "Enemy.hpp"
// HACK 1: Gonna add different behaviors such as speed, invincible, change lane
HeadEnemy::HeadEnemy(int x, int y) : Enemy("play/enemy-4.png", x, y, 25, 60, 60, 65, 1) {
	Tag = "Head";
}
void HeadEnemy::CreateEnemyBullet() {
	Engine::Point diff = Engine::Point(-1, 0);
	float rotation = ALLEGRO_PI / 2;
	getPlayScene()->EffectGroup->AddNewObject(new ShootEffect(Position.x + 30, Position.y));
	getPlayScene()->EnemyBulletGroup->AddNewObject(new NormalEnemyBullet(Position, diff, rotation, this));
	AudioHelper::PlayAudio("gun.wav");
}
