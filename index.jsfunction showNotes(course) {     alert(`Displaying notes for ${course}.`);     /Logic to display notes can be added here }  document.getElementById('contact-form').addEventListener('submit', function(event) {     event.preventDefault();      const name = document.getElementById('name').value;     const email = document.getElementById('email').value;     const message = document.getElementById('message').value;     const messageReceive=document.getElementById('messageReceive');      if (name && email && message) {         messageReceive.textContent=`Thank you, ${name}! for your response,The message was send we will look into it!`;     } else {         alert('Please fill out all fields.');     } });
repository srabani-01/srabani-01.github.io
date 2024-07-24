function showNotes(course) {
    alert(`Displaying notes for ${course}.`);
    // Logic to display notes can be added here
}

document.getElementById('contact-form').addEventListener('submit', function(event) {
    event.preventDefault();

    const name = document.getElementById('name').value;
    const email = document.getElementById('email').value;
    const message = document.getElementById('message').value;
    const messageReceive=document.getElementById('messageReceive');

    if (name && email && message) {
        messageReceive.textContent=`Thank you, ${name}! for your response,The message was send we will look into it!`;
    } else {
        alert('Please fill out all fields.');
    }
});
