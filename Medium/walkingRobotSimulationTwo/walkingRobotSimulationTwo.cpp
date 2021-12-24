class Robot {
private:
  int x = 0;
  int y = 0;
  char direction = 'E';
  pair<int, int> current = {0, 0};

public:
  Robot(int width, int height) {
    x = width - 1;
    y = height - 1;
  }

  int changeDirection(int i) {
    if (current.first > x) {
      current.first--;
      i--;
      direction = 'N';
    }
    if (current.second > y) {
      current.second--;
      i--;
      direction = 'W';
    }
    if (current.first < 0) {
      current.first++;
      i--;
      direction = 'S';
    }
    if (current.second < 0) {
      current.second++;
      i--;
      direction = 'E';
    }

    return i;
  }

  void move(int num) {
    int i = 0;
    int rotation = 2 * (x + y);
    num = num % (rotation);

    if (num == 0) {
      num += 2 * (x + y);
    }

    while (i < num) {

      i = changeDirection(i);

      // Moving the robot.
      if (direction == 'E') {
        current.first += 1;
        current.second += 0;
      }
      if (direction == 'N') {
        current.first += 0;
        current.second += 1;
      }
      if (direction == 'W') {
        current.first += -1;
        current.second += 0;
      }
      if (direction == 'S') {
        current.first += 0;
        current.second += -1;
      }

      i = changeDirection(i);

      i++;
    }
  }

  vector<int> getPos() {
    vector<int> pos(2, 0);

    pos[0] = current.first;
    pos[1] = current.second;

    return pos;
  }

  string getDir() {
    if (direction == 'E') {
      return "East";
    }

    if (direction == 'W') {
      return "West";
    }

    if (direction == 'N') {
      return "North";
    }

    if (direction == 'S') {
      return "South";
    }

    // This shouldn't be the case ever!
    return "";
  }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->move(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */