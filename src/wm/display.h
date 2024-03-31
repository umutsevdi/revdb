/******************************************************************************

 * File: wm/display.h
 *
 * Author: Umut Sevdi
 * Created: 03/31/24
 * Description: 

*****************************************************************************/

namespace lled
{
bool is_ready();

void setup();

class WindowManager {
   public:
    static WindowManager& instance();
    WindowManager& operator=(WindowManager&&) = default;
    WindowManager& operator=(const WindowManager&) = default;

   private:
    WindowManager();
    ~WindowManager();
};

}// namespace lled
