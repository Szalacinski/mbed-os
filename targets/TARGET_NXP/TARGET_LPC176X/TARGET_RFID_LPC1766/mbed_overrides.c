/* mbed Microcontroller Library
 * Copyright (c) 2020 Caleb Szalacinski
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "gpio_api.h"
#include "pinmap.h"

/* Runs before main() */
void mbed_sdk_init() {
    gpio_t gpio;
    /* Turn LEDs off before boot */
    gpio_init_out_ex(&gpio, SYS_LED, 1);
    gpio_init_out_ex(&gpio, ERR_LED, 1);
    gpio_init_out_ex(&gpio, IN_LED, 1);

    /* Set CLKOUT pin function for 50MHz RMII clock */
    pin_function(RMII_CLKOUT, 1);
}
