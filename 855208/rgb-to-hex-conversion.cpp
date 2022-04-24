class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b) {
    char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int rgb[] = {r, g, b};
    std::string res = "000000";
    
    int index = 1;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
        if (rgb[i] > 255) {
          res[index - j] = 'F';
        } else if (rgb[i] >= 0) {
          res[index - j] = hex[rgb[i] % 16];
          rgb[i] /= 16;
        }
      }
      index += 2;
    }
    return res;
  }
};
