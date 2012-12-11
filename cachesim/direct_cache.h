/* -*- mode:c; coding: utf-8 -*- */

/*!
  \file direct_cache.h
  \brief Кеш прямого отображения
 */

#ifndef DIRECT_CACHE_H_INCLUDED
#define DIRECT_CACHE_H_INCLUDED

#include "abstract_memory.h"
#include "parse_config.h"
#include "random.h"

/*!
  Создать кеш прямого отображения. Эта функция вызывается из cache_create после определения типа кеша,
  заданного в конфигурационном файле.
  \param cfg Указатель на структуру, хранящую конфигурационные параметры
  \param var_prefix Префикс имен параметров
  \param info Указатель на структуру, хранящую статистику моделирования
  \param mem Указатель на дескриптор нижележащей памяти (в виде указателя на базовую структуру)
  \param rnd Указатель на дескриптор генератора случайных чисел
  \return Указатель на структуру описания модели кеша (в виде указателя на базовую структуру)
 */
AbstractMemory *direct_cache_create(ConfigFile *cfg, const char *var_prefix, StatisticsInfo *info, AbstractMemory *mem, Random *rnd);

#endif

/*
 * Local variables:
 *  c-basic-offset: 4
 * End:
 */
