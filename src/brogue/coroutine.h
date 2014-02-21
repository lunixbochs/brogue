#ifndef COROUTINE_H
#define COROUTINE_H

#define crBegin static int __crstate = 0; switch(__crstate) { case 0:
#define crReturn(x) do { __crstate = __LINE__; return x; \
                         case __LINE__:; } while (0)
#define crFinish __crstate = 0; }
#define crWait(code, ret) { while (! (code)) { crReturn(ret); } }

#endif
