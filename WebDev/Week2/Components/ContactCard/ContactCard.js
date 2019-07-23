import React, { Component } from "react";
import Button from "@material-ui/core/Button";
import TextField from "@material-ui/core/TextField";
import "./ContactCard.css";

class ContactCard extends Component {
    constructor(props) {
        super(props);
        this.state = {
            name: "",
            number: "",
            email: ""

        };
    }

    onNameChange = event => {
        console.log(event.target.value)
        this.setState({ name: event.target.value });
    };
    onNumberChange = event => {
        console.log(event.target.value)
        this.setState({ number: event.target.value });
    };
    onEmailChange = event => {
        console.log(event.target.value)
        this.setState({ email: event.target.value });
    };

    handleSubmit = event => {
        event.preventDefault();
        const name = this.name.value;
        const number = this.number.value;
        const email = this.email.value;
        const info = {name: name, number: number, email: number};
        const data = this.state.data;
        data.push(info);
        this.setState({
            data:data
            
        })
    }

    
    render () {
        return (        
            <div className = "ContactCard">
            <div>
            <TextField
                label="Enter Name"
                placeholder="Name"
                className="TextField"
                margin="normal"
                variant="outlined"
                value={this.state.name}
                onChange={this.onNameChange}
            />
            </div>
            <div>
            <TextField
                label="Enter Number"
                placeholder="(505)500-5000"
                className="TextField"
                margin="normal"
                variant="outlined"
                value={this.state.number}
                onChange={this.onNumberChange}
            />
        </div>
        <div>
            <TextField
                label="Enter Email"
                placeholder="Email"
                className="TextField"
                margin="normal"
                variant="outlined"
                value={this.state.email}
                onChange={this.onEmailChange}
            />
        </div>
        <div>
            <Button
                variant="outlined"
                size="large"
                color="primary"
                // onClick={this.handleSubmit}
            >
                Submit
            </Button>
            
        </div>
        
        <div className = "Card">
            <h2>Name {this.state.name}</h2>
            <h2>Number: {this.state.number}</h2>
            <h2>Email: {this.state.email}</h2>
        </div>
        
    </div>
        
        )
    }
}

export default ContactCard;