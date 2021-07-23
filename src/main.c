
#include <device.h>
#include <stdio.h>
#include <string.h>
#include <zephyr.h>

#define LOG_LEVEL CONFIG_LOG_DEFAULT_LEVEL
#include <logging/log.h>
LOG_MODULE_REGISTER(app);

#define STB_IMAGE_IMPLEMENTATION
#define STBI_NO_STDIO
#include <stb_image.h>

// some random data
static uint8_t buf[] = { 0xff, 0xff, 0xff };

void main(void)
{
        int w, h, n;
        uint8_t *data = stbi_load_from_memory(buf, sizeof(buf), &w, &h, &n, 0);
}