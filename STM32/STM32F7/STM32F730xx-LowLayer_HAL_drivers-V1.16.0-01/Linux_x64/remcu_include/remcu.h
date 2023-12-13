/**
 * @cond
 *********************************************************************************************************************
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes with
 * remotemcu.com (remcu@remotemcu.com)
 *********************************************************************************************************************
 *
 * Change History
 * --------------
 *
 * 2019-06-15:
 *     - Initial version
 *
 * @endcond
 */

#ifndef REMCU_H
#define REMCU_H

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef REMCULIB_DLL_API
  #if defined(_WIN32) || defined(WIN32)
    #define REMCULIB_DLL_API __declspec(dllimport)
  #else 
    #define REMCULIB_DLL_API
  #endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

enum ResetType {
    __RUN = 0,
    __HALT,
};

enum LevelDebug { __ERROR = 0,
                  __WARNING, __INFO,
                  __DEBUG, __ALL_LOG };

#define MAX_MEM_OPERATION_SIZE 32
#define MIN_MEM_OPERATION_SIZE 1

#define _DEFAULT_TIMEOUT_SEC 3

/**
 * @brief remcu_connect2OpenOCD
 * The function is used to create a connection to the OpenOCD server destination
 * @param host - ip address of OpenOCD server "XXX.XXX.XXX.XXX". If the server runs on the host machine, the argument should be "localhost" or "127.0.0.1" value.
 * @param port - port of OpenOCD server. Default is 6666
 * @param timeout_sec - This parameter specifies the length of time, in seconds, to wait for a response when establishing communications. It can not be negative!
 * @return If no error occurs, function returns true
 */
REMCULIB_DLL_API bool remcu_connect2OpenOCD(const char* host, const uint16_t port,
                      const int timeout_sec);

/**
 * @brief remcu_connect2GDB
 * The function is used to create a connection to the GDB server destination
 * @param host - ip address of GDB server "XXX.XXX.XXX.XXX". If the server runs on the host machine, the argument should be "localhost" or "127.0.0.1" value.
 * @param port - port of GDB server. Default of OpenOCD is 3333
 * @param timeout_sec - This parameter specifies the length of time, in seconds, to wait for a response when establishing communications. It can not be negative!
 * @return If no error occurs, function returns true
 */
REMCULIB_DLL_API bool remcu_connect2GDB(const char* host, const uint16_t port,
                       const int timeout_sec);

/**
 * @brief remcu_disconnect
 * Closes the connection to the debug server(OpenOCD or GDB).
 * @return true only if an existing connection was successfully closed.
 */
REMCULIB_DLL_API bool remcu_disconnect();

/**
 * @brief remcu_isConnected
 * @return Returns true if an attempt to connect is successful
 */
REMCULIB_DLL_API bool remcu_isConnected();

/**
 * @brief remcu_getVersion
 * @return verson of REMCU lib. Don't free the pointer after use!
 */
REMCULIB_DLL_API const char * remcu_getVersion();

/**
 * @brief remcu_resetRemoteUnit
 * The function performs a reset of remote target(MCU or SoC)
 * @param The parameter specifies what should happen after the reset
 * - __RUN (enum value 0) Let the target run
 * - __HALT (enum value 1) Immediately halt the target
 * @return If no error occurs, function returns true
 */
REMCULIB_DLL_API bool remcu_resetRemoteUnit(const enum ResetType type);

/**
 * @brief remcu_setVerboseLevel
 * The function sets the verbose level. There are several levels of verboseness one can choose from.
 * @param level
 * level __ERROR (enum value 0) is almost silent, producing only necessary messages.
 * level __WARNING (enum value 1) is good for most purposes, where as.
 * level __INFO (enum value 2) is good when developing a new pipeline.
 * level __DEBUG (enum value 3) is good for debugging, especially when getting un-expected results.
 */
REMCULIB_DLL_API void remcu_setVerboseLevel(const enum LevelDebug level);

/**
 * @brief remcu_getErrorCount
 * @return the qty of errors that occurred during the last operations after start or call remcu_clearErrorCount
 */
REMCULIB_DLL_API size_t remcu_getErrorCount();

/**
 * @brief remcu_clearErrorCount
 * clear counter of errors
 */
REMCULIB_DLL_API void remcu_clearErrorCount();

/**
 * @brief remcu_store2mem
 * Copies count bytes from the local object pointed to by src to the remote MCU memory to by RAM address
 * @param addr - RAM MCU address to copy to. Example: it may be 0x20000000 for ARM cortex M* core
 * @param src - pointer to the memory location to copy from
 * @param count - number of bytes to copy. The parameter has to be no more than MAX_MEM_OPERATION_SIZE and less MIN_MEM_OPERATION_SIZE !
 * @return If no error occurs, function returns true
 */
REMCULIB_DLL_API bool remcu_store2mem(const uintptr_t addr, const uint8_t* src, const size_t count);

/**
 * @brief remcu_loadFrMem
 * Copies count bytes from the remote MCU memory to by RAM address to the object pointed to by dest.
 * @param addr - RAM MCU address to copy from. Example: it may be 0x20000000 for ARM cortex M* core
 * @param count - number of bytes to copy. The parameter has to be no more than MAX_MEM_OPERATION_SIZE and less MIN_MEM_OPERATION_SIZE !
 * @param dest - pointer to the memory location to copy to
 * @return If no error occurs, function returns true
 */
REMCULIB_DLL_API bool remcu_loadFrMem(const uintptr_t addr, const size_t count, uint8_t* dest);

/**
 * @brief remcu_debuggerTest
 * Performs test of debugger and debug server while mcu is connected.
 * @return If no error occurs, the function returns NULL
 * else the function returns error message (char array)
 * Don't free the pointer after use!
 * Note:  Invoke the function after establishing a connection with the debugger
 * through the successful utilization of either the
 * remcu_connect2OpenOCD or remcu_connect2GDB functions.
 */
REMCULIB_DLL_API const char* remcu_debuggerTest();

#ifdef __cplusplus
} //extern "C"
#endif

#include "device_defines.h"

#endif // REMCU_H
