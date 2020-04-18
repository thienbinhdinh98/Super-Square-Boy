//
// Created by alexm on 4/16/2020.
//

#ifndef FINALPROJECT_PLAYER_SQUARE_H
#define FINALPROJECT_PLAYER_SQUARE_H

#include <game/location.h>

namespace game {

class PlayerSquare {
 public:
  PlayerSquare();
  PlayerSquare(size_t row, size_t col);
  PlayerSquare(Location loc);
  Location GetLocation();
  void Jump();
  void StopRising();
  void Fall();
  void Rise();
  size_t TurnsRising();

 private:
  Location loc_;
  size_t turns_rising_ = 0;
};

}

#endif  // FINALPROJECT_PLAYER_SQUARE_H
