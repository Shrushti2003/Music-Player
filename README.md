# Music Player Project

## About
This project is a comprehensive Music Player application designed to provide an engaging and user-friendly experience for music enthusiasts. The application offers functionality for playing songs either through user-provided URLs or from a curated list of Hindi and English songs, ensuring a diverse and enjoyable listening experience.

## Purpose of the Project
The main objective of this project is to create an intuitive tool for playing music. It is designed to help users easily access their favorite songs, whether by entering a URL or selecting from a predefined list. The project aims to demonstrate fundamental principles of user interaction and music playback in a simple and effective manner.

## Features

### Core Functionality

**User Authentication:**
- **Login Page:**
  - Enter username.
  - Enter password.
  - Redirects back to the login page if the credentials are incorrect, prompting for the correct username and password.

**Main Menu:**
- Welcome message: "---Drop Beats, Not Bombs - WELCOME, HOMIE!---"
- Option to play a song using a URL or select a song from a list.
- User selects their choice by entering '1' for URL link or '2' for song selection.

**Song Selection:**
- If the user selects to play a song from the list, they choose between Hindi and English songs.
- A list of songs is displayed based on the user's choice.

**Playback and Re-run Option:**
- After playing a song, users are prompted to choose if they want to play another song.
- Users can dive back in by pressing 'y' or 'Y', or exit by pressing any other key.

### Detailed Functionality

**User Authentication:**

**Login Page:**
- Users enter their username and password.
- Incorrect entries redirect users back to the login page with a prompt to enter the correct details.

**Main Menu:**

- Displays a welcome message and prompts users to choose how they want to play a song.
  - **Options:**
    - For URL link, press '1'.
    - For song selection, press '2'.
  - User selects their choice.

**Song Selection:**

- If '2' is selected:
  - Prompts the user to choose between Hindi songs (press '1') or English songs (press '2').
  - Displays the corresponding list of songs based on the user's choice.
  - Users select the desired song by entering its number from the list.

**Playback and Re-run:**

- After a song finishes playing, the application thanks the user.
- Prompts the user to press 'y' or 'Y' to play another song, or any other key to exit.

## Example Usage

**User Authentication:**

```plaintext
AURAL (Name of company)
Echo the Extraordinary (tagline)
Enter username: user123
Enter password: ********
(If wrong username or password is entered, it redirects to the same page with a prompt to enter correct details.)
