# AI Usage Log

**Platform:** Claude.ai (chat interface)
**Model:** Claude Sonnet 5

---

## Interaction 1

### User
I am going to start asking for help with my EECS 348 lab

### Assistant Summary
Acknowledged the AI usage log template the student had shared and asked what the lab involved and where to start.

---

## Interaction 2

### User
Give me a simple profile page styled with CSS, I need to include text, a photo, and a hyperlink

### Assistant Summary
Created an HTML file (profile.html) containing a CSS-styled profile card with a placeholder photo, name and bio text, and a hyperlink styled as a button.

---

## Interaction 3

### User
So how would I add an photo to it

### Assistant Summary
Explained three ways to add a photo: referencing a local image file in the same folder, linking to a hosted image URL, or embedding the image directly as a Base64 data URI.

---

## Interaction 4

### User
where would i put this line of code so i can have my imagine appear where the placeholder is right now

### Assistant Summary
Explained to replace the value inside the `src` attribute of the existing `<img>` tag with the local photo's filename.

---

## Interaction 5

### User
how do i crop the photot

### Assistant Summary
Explained that the existing CSS `object-fit: cover` property already crops the image automatically, described using `object-position` to adjust which part of the image shows, and listed external tools (Photos, Preview, Photopea) for manual cropping if needed.

---

## Interaction 6

### User
now how would I add an video

### Assistant Summary
Explained two approaches: embedding a local video file using the `<video>` tag, or embedding a YouTube video using an `<iframe>` with YouTube's embed URL format.

---

## Interaction 7

### User
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<title>My Profile</title>
<style>
  * {
    box-sizing: border-box;
  }

  body {
    margin: 0;
    min-height: 100vh;
    display: flex;
    align-items: center;
    justify-content: center;
    font-family: 'Segoe UI', Arial, sans-serif;
    background: linear-gradient(135deg, #4b6cb7, #182848);
  }

  .card {
    background: #ffffff;
    border-radius: 16px;
    box-shadow: 0 10px 30px rgba(0, 0, 0, 0.25);
    padding: 40px 30px;
    width: 320px;
    text-align: center;
  }

  .photo {
    width: 140px;
    height: 140px;
    border-radius: 50%;
    object-fit: cover;
    border: 4px solid #4b6cb7;
    margin-bottom: 20px;
  }

  h1 {
    margin: 0 0 5px 0;
    font-size: 1.5em;
    color: #182848;
  }

  .title {
    color: #666;
    font-size: 0.95em;
    margin-bottom: 15px;
  }

  p.bio {
    color: #444;
    font-size: 0.9em;
    line-height: 1.5;
    margin-bottom: 20px;
  }

  a.link-button {
    display: inline-block;
    text-decoration: none;
    background: #4b6cb7;
    color: #fff;
    padding: 10px 24px;
    border-radius: 25px;
    font-size: 0.9em;
    transition: background 0.2s ease;
  }

  a.link-button:hover {
    background: #182848;
  }
</style>
</head>
<body>

  <div class="card">
    <img class="photo" src="selfie.jpeg" alt="Profile photo">
    <h1>Joseph Akins</h1>
    <div class="title">Computer Engineering @ KU</div>
    <p class="bio">
      Junior studying Computer Engineering at the University of Kansas.
      Interested in software, hardware systems, and building things that work.
    </p>
    <a class="link-button" href="https://github.com/" target="_blank">Visit My GitHub</a>
  </div>

</body>
</html>

here's what I have right now, put a video in there

### Assistant Summary
Edited profile.html to insert a `<video>` element with a local file source between the bio text and the GitHub link, and added matching CSS styling for it.

---

## Interaction 8

### User
I am using a online youtuve video

### Assistant Summary
Replaced the local `<video>` element with an `<iframe>` embed placeholder for a YouTube video and asked the student for the video URL to complete the embed.

---

## Interaction 9

### User
here is the youtube video I am using https://www.youtube.com/watch?v=dQw4w9WgXcQ&list=RDdQw4w9WgXcQ&start_radio=1

### Assistant Summary
Extracted the video ID from the provided URL and updated the iframe's `src` attribute to embed that specific video.

---

## Interaction 10

### User
Now I need a hyper link to a webpage like this

Create a web page that has a paragraph with some dummy text. Near the paragraph, have a text field to accept RGB values to form any colors for the paragraph and the border. You also need to control the width of the border

### Assistant Summary
Created a new page (rgb-demo.html) containing a dummy paragraph, RGB number inputs, and a slider that control the paragraph's text color, border color, and border width via JavaScript, then added a hyperlink to it from profile.html.

---

## Interaction 11

### User
the colors are not changing

### Assistant Summary
Reviewed the file's code, found the logic correct, and suggested troubleshooting steps including checking how the file was being opened, checking the browser console for errors, and testing the slider versus the color fields.

---

## Interaction 12

### User
the border works but the colors wont chang e

### Assistant Summary
Modified the JavaScript to bind both `input` and `change` event listeners on all fields and to apply styles using `setProperty` with `!important` to rule out CSS specificity conflicts.

---

## Interaction 13

### User
still not working

### Assistant Summary
Reviewed the script again, confirmed the logic was correct, and asked diagnostic questions about how the file was being opened (browser vs. preview pane), whether the updated file had been re-downloaded, and whether the browser console showed any errors.

---

## Interaction 14

### User
Create a JavaScript program that allows the user to enter a password two times to verify them. If the password is not at least eight characters long or if two passwords are different, alert the user. Otherwise, tell the user that two passwords are matched.

### Assistant Summary
Created an HTML/JavaScript page (password-check.html) with two password fields and a Submit button that alerts the user if the password is under 8 characters, alerts if the two entries don't match, or confirms a match otherwise.

---

## Interaction 15

### User
Create a PHP program that receives a number and displays a multiplication table from 1 to the number. You also need to print the row and column indexes in the table.

### Assistant Summary
Created a PHP file (multiplication-table.php) with a form for entering a number, which generates an HTML table displaying row and column indexes along with the corresponding multiplication products, and noted that PHP requires a server environment to run.

---

## Interaction 16

### User
How do i integrate this into my website

### Assistant Summary
Explained that the PHP file requires a PHP-capable server (unlike the static HTML pages) and provided step-by-step instructions for setting up a local PHP server, placing the file in the project folder, linking to it from the profile page, and noted hosting requirements for live deployment.

---

## Interaction 17

### User
Explain how to rgb app works

### Assistant Summary
Walked through how rgb-demo.html works, covering the paragraph element, the input fields, the `clamp()` and `updateStyles()` functions, the event listeners that make it update live, and the initial function call on page load.

---

## Interaction 18

### User
so its the same method with making the border thicker

### Assistant Summary
Confirmed that the border width control uses the same `updateStyles()` function and event-listener pattern as the color controls, differing only in that it applies a single numeric value with a "px" unit rather than building an `rgb()` string.

---

## Interaction 19

### User
explain how to add youtube video to my website

### Assistant Summary
Explained how the YouTube iframe embed works, including the video ID, the embed URL format, the iframe's attributes, and the CSS class styling it, and contrasted it with the local `<video>` tag approach.

---

## Interaction 20

### User
<iframe class="profile-video" height="160"
      src="https://www.youtube.com/watch?v=dQw4w9WgXcQ&list=RDdQw4w9WgXcQ&start_radio=1"
      frameborder="0" allowfullscreen>
    </iframe>

Why is my youbtube video not showing up

### Assistant Summary
Identified that the `src` was using the regular YouTube watch URL instead of the required embed URL format, explained the fix, and offered to update profile.html with the corrected link.

---

## Interaction 21

### User
Now give me my ai report

### Assistant Summary
Compiled the AI Usage Log document covering all interactions in the conversation.

---
