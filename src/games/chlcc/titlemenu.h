#pragma once

#include "../../animation.h"
#include "../../ui/menu.h"
#include "../../ui/widgets/group.h"
#include "../../ui/widgets/button.h"
#include "../../ui/widgets/chlcc/titlebutton.h"
#include "introsequence.h"

namespace Impacto {
namespace UI {
namespace CHLCC {

class TitleMenu : public Menu {
 public:
  TitleMenu();

  void Show();
  void Hide();
  void Update(float dt);
  void Render();

  Animation PressToStartAnimation;
  Animation PrimaryFadeAnimation;
  Animation SecondaryFadeAnimation;
  Animation ItemsFadeInAnimation;
  Animation SecondaryItemsFadeInAnimation;
  Animation SpinningCircleAnimation;
  Animation SpinningCircleFlashingAnimation;

  void MenuButtonOnClick(Widgets::Button* target);
  void SecondaryButtonOnClick(Widgets::Button* target);

  void DrawTitleMenuBackGraphics() const;
  void DrawSpinningCircle(float alpha) const;

 private:
  Widgets::Group* MainItems;
  Widgets::CHLCC::TitleButton* Start;
  Widgets::CHLCC::TitleButton* Load;
  Widgets::CHLCC::TitleButton* Extra;
  Widgets::CHLCC::TitleButton* System;

  Widgets::Group* LoadItems;
  Widgets::CHLCC::TitleButton* SubLoad;
  Widgets::CHLCC::TitleButton* QuickLoad;

  Widgets::Group* CurrentExtraItems;
  Widgets::Group* LockedExtraItems;
  Widgets::Group* UnlockedExtraItems;
  Widgets::CHLCC::TitleButton* ClearList;
  Widgets::CHLCC::TitleButton* CGLibrary;
  Widgets::CHLCC::TitleButton* SoundLibrary;
  Widgets::CHLCC::TitleButton* MovieLibrary;
  Widgets::CHLCC::TitleButton* Tips;
  Widgets::CHLCC::TitleButton* Trophy;

  Widgets::Group* SystemItems;
  Widgets::CHLCC::TitleButton* Config;
  Widgets::CHLCC::TitleButton* SystemSave;

  Impacto::CHLCC::IntroSequence IntroSequence;
};

}  // namespace CHLCC
}  // namespace UI
}  // namespace Impacto