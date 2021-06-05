#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "NormalEnemyBullet.hpp"
#include "Group.hpp"
#include "BossEnemy.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "ShootEffect.hpp"
#include "Enemy.hpp"

BossEnemy::BossEnemy(int x, int y) : Enemy("play/boss.png", x, y, 50, 50, 5, 5, 2) {
}

void BossEnemy::CreateEnemyBullet() {
	Engine::Point diff = Engine::Point(-1, 0);
	float rotation = ALLEGRO_PI / 2;
	getPlayScene()->EffectGroup->AddNewObject(new ShootEffect(Position.x, Position.y));
	getPlayScene()->EnemyBulletGroup->AddNewObject(new NormalEnemyBullet(Position, diff, rotation, this));
	AudioHelper::PlayAudio("gun.wav");
}
