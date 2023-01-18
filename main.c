// Copyright Joanne Santhosh 2022
//
// Created by Joanne Santhosh
// Created in Jan 2023
// This program is for Dodge Game on GameBoy

#include <gb/gb.h>
#include <stdio.h>

#include "SpongeBob.png"

void main(){
    // load spritesheet referenced as #0
    // load 16 sprites from it
    // from variable SpaceAliens
    set_sprite_data(0, 16, SpongeBob);

    // from teh loaded spritesheet
    // load sprite index #15
    // into position #0
    set_sprite_tile(0, 15);

    // move sprite indexed #0 to (88, 78)
    move_sprite(0, 88, 78);

    // load some more sprites
    set_sprite_tile(1, 5);
    set_sprite_tile(2, 10);

    //move the sprite around
    move_sprite(1, 8, 144);
    move_sprite(2, 64, 64);

    SHOW_SPRITES;
}
