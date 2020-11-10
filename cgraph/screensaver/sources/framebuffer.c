/*
** EPITECH PROJECT, 2017
** framebuffer.c
** File description:
** framebuffer functions
*/

#include "scrsaver.h"

framebuffer_t *framebuffer_create(framebuffer_t *buffer, sfColor color)
{
	unsigned int cnt = 0;
	unsigned int size = 800 * 600 * 4;

	buffer->width = 800;
	buffer->height = 600;
	buffer->pixels = malloc(size);
	while (cnt < size) {
		buffer->pixels[cnt++] = color.r;
		buffer->pixels[cnt++] = color.g;
		buffer->pixels[cnt++] = color.b;
		buffer->pixels[cnt++] = color.a;
	}
	return (buffer);
}

framebuffer_t *framebuffer_clear(framebuffer_t *buffer, sfColor color)
{
	unsigned int cnt = 0;
	unsigned int size = 800 * 600 * 4;

	while (cnt < size) {
		buffer->pixels[cnt++] = color.r;
		buffer->pixels[cnt++] = color.g;
		buffer->pixels[cnt++] = color.b;
		buffer->pixels[cnt++] = color.a;
	}
	return (buffer);
}
