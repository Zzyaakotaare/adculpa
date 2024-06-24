     #include <Windows.h>

     int main()
     {
         HWND windowHandle = FindWindow(NULL, "Window Title");
         SetWindowPos(windowHandle, HWND_TOP, 0, 0, 0, 0, SWP_NOSIZE);
         return 0;
     }
     