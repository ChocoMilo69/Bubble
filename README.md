# BB
My Game is based on a child hood favourite game of mine - Bubble Bobble
The main idea is a dragon character that blows bubbles and traps their enemies, and then pop the bubble with their pointy head to defeat them!

Throughout this project, I built my skills in UE from the basics:
- What are actors, components, pawns & characters etc
- Changing scale, rotation and size of mesh/sprite

I learnt the blue print system by doing some tutorials, and some draft projects:
- basic common nodes i.e. branching, getCharacterXXX...
- custom variables & events
- vectors & transform
- line tracing

After many re-starts, I decided to give the 2D scroller template a go, and I even made my own images as Sprites (I know this won't be marked, but I just had to :p) which then was made into flip book animations, and different animations or sprites were triggered depending on the state of the Actor/character I.e. bubble blowing, enemy trapping.
One thing I found difficult in this transition is that it seems like 2D, but when editing everything was still 3D, and all the elements I was working with were literally 1 pixel in the y axis.


And once I started to build my game, I had to learn more about:
- Changing movement: gravity, speed, jump height
- Projectile movement
- Collision: Ignoring, Overlapping, blocking, HIT and Overlap events
- Box collision components
- collision and HIT events
This was probably the trickiest part. For example since I wanted my characters to be able to jump through a platform from below but can still stand on top.

After the logistics, make the UI nicer by implementing Start menu, score keeping, pause, game over and winning menus.

For the C++ component, I wrote a simple function that is checked on a tick base. It basically has 5% chance of returning true, which is used for determining whether the monster would perform a jump when there is a platform above his head.

Finally, I hadded some cute sound :)


So basically the features of my game include:
- Player can move around using ASWD and SPACE BAR to blow bubbles, P for pause
- Once a Bubble is blown, for the first 2 seconds it is able to catch a monster
- After that, the bubble will be dormant and will not have effect on monster, and will pop itself in a period of time, unless popped by the player
- You can win the game by trapping and popping all the monsters. But BE AWARE! If you don't pop them in time they will come back!!!

