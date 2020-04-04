#include "Editor.h"

#include "Roamer.h"

#include <UScene/core/core>

using namespace Ubpa;
using namespace std;

Editor::Editor() {
	auto rst = scene.CreateSObj<Cmpt::Camera, Cmpt::Roamer>("roamerobj");
	roamerobj = get<SObj*>(rst);
}

void Editor::SetCamera(SObj* cameraobj) {
	auto pos = cameraobj->Get<Cmpt::Transform>()->WorldPos();
	auto rot = cameraobj->Get<Cmpt::Transform>()->WorldRot();
	roamerobj->Get<Cmpt::Transform>()->SetPosition(pos);
	roamerobj->Get<Cmpt::Transform>()->SetRotation(rot);
	roamerobj->Get<Cmpt::Camera>()->SetAR(cameraobj->Get<Cmpt::Camera>()->ar);
	roamerobj->Get<Cmpt::Camera>()->SetFOV(cameraobj->Get<Cmpt::Camera>()->fov);
}

void Editor::Update() {
	scene.Update();
}