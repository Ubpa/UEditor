#pragma once

#include <UDP/Basic/Read.h>
#include <UScene/core/Component.h>
#include <UScene/core/Cmpt/Transform.h>

namespace Ubpa::Cmpt {
	class Roamer : public Component {
	public:
		void OnUpdate(Cmpt::Transform* tsfm);
	};
}
