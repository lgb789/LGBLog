
#ifndef LGBLog_h
#define LGBLog_h

#ifdef DEBUG
#define DLog(fmt, ...)              NSLog((@"[Fun: %s][Line: %d]\nLog: " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DLog(fmt, ...)
#endif

#endif 
