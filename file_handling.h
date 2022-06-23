/*
 * =====================================================================================
 *
 *       Filename:  file_handling.h
 *
 *    Description:  This is a file to handle all file-related utils, such as reading
 *    or writing to a file.
 *
 *        Version:  1.0
 *        Created:  06/23/2022 07:05:40 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  David Elkoby, 
 *   Organization:  OpenU 
 *
 * =====================================================================================
 */

#ifndef FILE_HANDLING_H
#define FILE_HANDLING_H

char* read_file_content(char* path);
void write_to_file(char* path, char* content);

#endif
